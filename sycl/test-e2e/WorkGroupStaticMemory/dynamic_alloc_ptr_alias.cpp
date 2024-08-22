// RUN: %{build} -o %t.out
// RUN: %{run} %t.out
//
// REQUIRES: cuda

// Test work_group_static extension with allocation size specified at runtime
// and multiple calls to the extension inside the kernel.

#include <sycl/detail/core.hpp>
#include <sycl/ext/oneapi/work_group_static.hpp>

#include <vector>

constexpr size_t WgSize = 32;
constexpr size_t WgCount = 4;
constexpr size_t RepeatWG = 16;
constexpr size_t ElemPerWG = WgSize * RepeatWG;
constexpr size_t Size = WgSize * WgCount * RepeatWG;

using namespace sycl;

namespace sycl_ext = sycl::ext::oneapi::experimental;

int main() {
  queue Q;
  std::vector<int> Vec(Size, 0);
  buffer<int, 1> Buf{Vec.data(), range<1>(Size)};

  Q.submit([&](handler &Cgh) {
    auto Acc = Buf.get_access<access::mode::read_write>(Cgh);
    sycl_ext::work_group_static_size static_size(WgSize * RepeatWG *
                                                 sizeof(int));
    sycl_ext::properties properties{static_size};
    Cgh.parallel_for(
        nd_range<1>(range<1>(Size), range<1>(WgSize)), properties,
        [=](nd_item<1> Item) {
          multi_ptr<int, access::address_space::local_space,
                    sycl::access::decorated::no>
              Ptr = sycl::ext::oneapi::experimental::
                  get_dynamic_work_group_memory<int>();
          size_t GroupOffset = Item.get_group_linear_id() * ElemPerWG;
          for (size_t I = 0; I < RepeatWG; ++I) {
            Ptr[WgSize * I + Item.get_local_linear_id()] =
                Item.get_local_linear_id();
          }

          Item.barrier();
          // Check that multiple calls return the same pointer.
          multi_ptr<unsigned int, access::address_space::local_space,
                    sycl::access::decorated::no>
              PtrAlias = sycl::ext::oneapi::experimental::
                  get_dynamic_work_group_memory<unsigned int>();

          for (size_t I = 0; I < RepeatWG; ++I) {
            // Check that the memory is accessible from other
            // work-items
            size_t BaseIdx = GroupOffset + (I * WgSize);
            size_t LocalIdx = Item.get_local_linear_id() ^ 1;
            size_t GlobalIdx = BaseIdx + LocalIdx;
            Acc[GlobalIdx] = PtrAlias[WgSize * I + LocalIdx];
          }
        });
  });

  host_accessor Acc(Buf, read_only);
  for (size_t I = 0; I < Size; ++I) {
    assert(Acc[I] == I % WgSize);
  }
}
