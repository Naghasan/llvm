/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* SPIRV Builtin exhaustive testing                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: SPIRVBuiltins.td                                                     *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


// RUN: %clang_cc1 -Wno-unused-value -O0 -internal-isystem %S/../../lib/Headers -include __clang_spirv_builtins.h -triple spirv64 -emit-llvm %s -fsycl-is-device -o - | FileCheck %s -check-prefixes=CHECK,CHECK-Float16
// RUN: %clang_cc1 -Wno-unused-value -O0 -internal-isystem %S/../../lib/Headers -include __clang_spirv_builtins.h -triple spirv64 -emit-llvm %s -x cl -o - | FileCheck %s -check-prefixes=CHECK,CHECK-half
// RUN: %clang_cc1 -Wno-unused-value -O0 -internal-isystem %S/../../lib/Headers -include __clang_spirv_builtins.h -triple spirv32 -emit-llvm %s -fsycl-is-device -o - | FileCheck %s -check-prefixes=CHECK,CHECK-Float16
// RUN: %clang_cc1 -Wno-unused-value -O0 -internal-isystem %S/../../lib/Headers -include __clang_spirv_builtins.h -triple spirv32 -emit-llvm %s -x cl -o - | FileCheck %s -check-prefixes=CHECK,CHECK-half

#include "__clang_spirv_builtins.h"
// Test __spirv_ocl_acos
// CHECK: call {{.*}} float @_Z16__spirv_ocl_acosf(float {{.*}})
__spv_fp32_t test0___spirv_ocl_acos(__spv_fp32_t arg1) {
  return __spirv_ocl_acos(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z16__spirv_ocl_acosDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test1___spirv_ocl_acos(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_acos(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z16__spirv_ocl_acosDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test2___spirv_ocl_acos(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_acos(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z16__spirv_ocl_acosDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test3___spirv_ocl_acos(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_acos(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z16__spirv_ocl_acosDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test4___spirv_ocl_acos(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_acos(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z16__spirv_ocl_acosDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test5___spirv_ocl_acos(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_acos(arg1);
}
// CHECK: call {{.*}} double @_Z16__spirv_ocl_acosd(double {{.*}})
__spv_fp64_t test6___spirv_ocl_acos(__spv_fp64_t arg1) {
  return __spirv_ocl_acos(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z16__spirv_ocl_acosDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test7___spirv_ocl_acos(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_acos(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z16__spirv_ocl_acosDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test8___spirv_ocl_acos(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_acos(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z16__spirv_ocl_acosDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test9___spirv_ocl_acos(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_acos(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z16__spirv_ocl_acosDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test10___spirv_ocl_acos(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_acos(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z16__spirv_ocl_acosDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test11___spirv_ocl_acos(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_acos(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z16__spirv_ocl_acosDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z16__spirv_ocl_acosDh(half {{.*}})
__spv_fp16_t test12___spirv_ocl_acos(__spv_fp16_t arg1) {
  return __spirv_ocl_acos(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z16__spirv_ocl_acosDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z16__spirv_ocl_acosDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test13___spirv_ocl_acos(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_acos(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z16__spirv_ocl_acosDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z16__spirv_ocl_acosDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test14___spirv_ocl_acos(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_acos(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z16__spirv_ocl_acosDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z16__spirv_ocl_acosDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test15___spirv_ocl_acos(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_acos(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z16__spirv_ocl_acosDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z16__spirv_ocl_acosDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test16___spirv_ocl_acos(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_acos(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z16__spirv_ocl_acosDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z16__spirv_ocl_acosDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test17___spirv_ocl_acos(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_acos(arg1);
}
// Test __spirv_ocl_acosh
// CHECK: call {{.*}} float @_Z17__spirv_ocl_acoshf(float {{.*}})
__spv_fp32_t test18___spirv_ocl_acosh(__spv_fp32_t arg1) {
  return __spirv_ocl_acosh(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z17__spirv_ocl_acoshDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test19___spirv_ocl_acosh(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_acosh(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z17__spirv_ocl_acoshDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test20___spirv_ocl_acosh(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_acosh(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z17__spirv_ocl_acoshDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test21___spirv_ocl_acosh(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_acosh(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z17__spirv_ocl_acoshDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test22___spirv_ocl_acosh(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_acosh(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z17__spirv_ocl_acoshDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test23___spirv_ocl_acosh(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_acosh(arg1);
}
// CHECK: call {{.*}} double @_Z17__spirv_ocl_acoshd(double {{.*}})
__spv_fp64_t test24___spirv_ocl_acosh(__spv_fp64_t arg1) {
  return __spirv_ocl_acosh(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z17__spirv_ocl_acoshDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test25___spirv_ocl_acosh(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_acosh(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z17__spirv_ocl_acoshDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test26___spirv_ocl_acosh(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_acosh(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z17__spirv_ocl_acoshDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test27___spirv_ocl_acosh(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_acosh(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z17__spirv_ocl_acoshDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test28___spirv_ocl_acosh(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_acosh(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z17__spirv_ocl_acoshDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test29___spirv_ocl_acosh(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_acosh(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z17__spirv_ocl_acoshDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z17__spirv_ocl_acoshDh(half {{.*}})
__spv_fp16_t test30___spirv_ocl_acosh(__spv_fp16_t arg1) {
  return __spirv_ocl_acosh(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z17__spirv_ocl_acoshDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z17__spirv_ocl_acoshDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test31___spirv_ocl_acosh(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_acosh(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z17__spirv_ocl_acoshDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z17__spirv_ocl_acoshDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test32___spirv_ocl_acosh(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_acosh(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z17__spirv_ocl_acoshDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z17__spirv_ocl_acoshDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test33___spirv_ocl_acosh(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_acosh(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z17__spirv_ocl_acoshDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z17__spirv_ocl_acoshDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test34___spirv_ocl_acosh(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_acosh(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z17__spirv_ocl_acoshDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z17__spirv_ocl_acoshDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test35___spirv_ocl_acosh(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_acosh(arg1);
}
// Test __spirv_ocl_acospi
// CHECK: call {{.*}} float @_Z18__spirv_ocl_acospif(float {{.*}})
__spv_fp32_t test36___spirv_ocl_acospi(__spv_fp32_t arg1) {
  return __spirv_ocl_acospi(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z18__spirv_ocl_acospiDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test37___spirv_ocl_acospi(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_acospi(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z18__spirv_ocl_acospiDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test38___spirv_ocl_acospi(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_acospi(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z18__spirv_ocl_acospiDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test39___spirv_ocl_acospi(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_acospi(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z18__spirv_ocl_acospiDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test40___spirv_ocl_acospi(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_acospi(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z18__spirv_ocl_acospiDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test41___spirv_ocl_acospi(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_acospi(arg1);
}
// CHECK: call {{.*}} double @_Z18__spirv_ocl_acospid(double {{.*}})
__spv_fp64_t test42___spirv_ocl_acospi(__spv_fp64_t arg1) {
  return __spirv_ocl_acospi(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z18__spirv_ocl_acospiDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test43___spirv_ocl_acospi(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_acospi(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z18__spirv_ocl_acospiDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test44___spirv_ocl_acospi(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_acospi(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z18__spirv_ocl_acospiDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test45___spirv_ocl_acospi(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_acospi(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z18__spirv_ocl_acospiDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test46___spirv_ocl_acospi(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_acospi(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z18__spirv_ocl_acospiDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test47___spirv_ocl_acospi(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_acospi(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z18__spirv_ocl_acospiDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z18__spirv_ocl_acospiDh(half {{.*}})
__spv_fp16_t test48___spirv_ocl_acospi(__spv_fp16_t arg1) {
  return __spirv_ocl_acospi(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z18__spirv_ocl_acospiDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z18__spirv_ocl_acospiDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test49___spirv_ocl_acospi(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_acospi(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z18__spirv_ocl_acospiDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z18__spirv_ocl_acospiDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test50___spirv_ocl_acospi(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_acospi(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z18__spirv_ocl_acospiDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z18__spirv_ocl_acospiDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test51___spirv_ocl_acospi(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_acospi(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z18__spirv_ocl_acospiDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z18__spirv_ocl_acospiDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test52___spirv_ocl_acospi(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_acospi(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z18__spirv_ocl_acospiDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z18__spirv_ocl_acospiDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test53___spirv_ocl_acospi(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_acospi(arg1);
}
// Test __spirv_ocl_asin
// CHECK: call {{.*}} float @_Z16__spirv_ocl_asinf(float {{.*}})
__spv_fp32_t test54___spirv_ocl_asin(__spv_fp32_t arg1) {
  return __spirv_ocl_asin(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z16__spirv_ocl_asinDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test55___spirv_ocl_asin(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_asin(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z16__spirv_ocl_asinDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test56___spirv_ocl_asin(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_asin(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z16__spirv_ocl_asinDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test57___spirv_ocl_asin(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_asin(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z16__spirv_ocl_asinDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test58___spirv_ocl_asin(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_asin(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z16__spirv_ocl_asinDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test59___spirv_ocl_asin(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_asin(arg1);
}
// CHECK: call {{.*}} double @_Z16__spirv_ocl_asind(double {{.*}})
__spv_fp64_t test60___spirv_ocl_asin(__spv_fp64_t arg1) {
  return __spirv_ocl_asin(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z16__spirv_ocl_asinDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test61___spirv_ocl_asin(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_asin(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z16__spirv_ocl_asinDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test62___spirv_ocl_asin(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_asin(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z16__spirv_ocl_asinDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test63___spirv_ocl_asin(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_asin(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z16__spirv_ocl_asinDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test64___spirv_ocl_asin(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_asin(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z16__spirv_ocl_asinDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test65___spirv_ocl_asin(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_asin(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z16__spirv_ocl_asinDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z16__spirv_ocl_asinDh(half {{.*}})
__spv_fp16_t test66___spirv_ocl_asin(__spv_fp16_t arg1) {
  return __spirv_ocl_asin(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z16__spirv_ocl_asinDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z16__spirv_ocl_asinDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test67___spirv_ocl_asin(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_asin(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z16__spirv_ocl_asinDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z16__spirv_ocl_asinDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test68___spirv_ocl_asin(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_asin(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z16__spirv_ocl_asinDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z16__spirv_ocl_asinDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test69___spirv_ocl_asin(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_asin(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z16__spirv_ocl_asinDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z16__spirv_ocl_asinDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test70___spirv_ocl_asin(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_asin(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z16__spirv_ocl_asinDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z16__spirv_ocl_asinDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test71___spirv_ocl_asin(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_asin(arg1);
}
// Test __spirv_ocl_asinh
// CHECK: call {{.*}} float @_Z17__spirv_ocl_asinhf(float {{.*}})
__spv_fp32_t test72___spirv_ocl_asinh(__spv_fp32_t arg1) {
  return __spirv_ocl_asinh(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z17__spirv_ocl_asinhDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test73___spirv_ocl_asinh(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_asinh(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z17__spirv_ocl_asinhDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test74___spirv_ocl_asinh(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_asinh(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z17__spirv_ocl_asinhDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test75___spirv_ocl_asinh(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_asinh(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z17__spirv_ocl_asinhDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test76___spirv_ocl_asinh(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_asinh(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z17__spirv_ocl_asinhDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test77___spirv_ocl_asinh(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_asinh(arg1);
}
// CHECK: call {{.*}} double @_Z17__spirv_ocl_asinhd(double {{.*}})
__spv_fp64_t test78___spirv_ocl_asinh(__spv_fp64_t arg1) {
  return __spirv_ocl_asinh(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z17__spirv_ocl_asinhDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test79___spirv_ocl_asinh(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_asinh(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z17__spirv_ocl_asinhDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test80___spirv_ocl_asinh(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_asinh(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z17__spirv_ocl_asinhDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test81___spirv_ocl_asinh(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_asinh(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z17__spirv_ocl_asinhDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test82___spirv_ocl_asinh(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_asinh(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z17__spirv_ocl_asinhDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test83___spirv_ocl_asinh(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_asinh(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z17__spirv_ocl_asinhDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z17__spirv_ocl_asinhDh(half {{.*}})
__spv_fp16_t test84___spirv_ocl_asinh(__spv_fp16_t arg1) {
  return __spirv_ocl_asinh(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z17__spirv_ocl_asinhDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z17__spirv_ocl_asinhDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test85___spirv_ocl_asinh(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_asinh(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z17__spirv_ocl_asinhDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z17__spirv_ocl_asinhDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test86___spirv_ocl_asinh(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_asinh(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z17__spirv_ocl_asinhDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z17__spirv_ocl_asinhDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test87___spirv_ocl_asinh(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_asinh(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z17__spirv_ocl_asinhDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z17__spirv_ocl_asinhDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test88___spirv_ocl_asinh(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_asinh(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z17__spirv_ocl_asinhDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z17__spirv_ocl_asinhDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test89___spirv_ocl_asinh(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_asinh(arg1);
}
// Test __spirv_ocl_asinpi
// CHECK: call {{.*}} float @_Z18__spirv_ocl_asinpif(float {{.*}})
__spv_fp32_t test90___spirv_ocl_asinpi(__spv_fp32_t arg1) {
  return __spirv_ocl_asinpi(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z18__spirv_ocl_asinpiDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test91___spirv_ocl_asinpi(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_asinpi(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z18__spirv_ocl_asinpiDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test92___spirv_ocl_asinpi(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_asinpi(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z18__spirv_ocl_asinpiDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test93___spirv_ocl_asinpi(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_asinpi(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z18__spirv_ocl_asinpiDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test94___spirv_ocl_asinpi(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_asinpi(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z18__spirv_ocl_asinpiDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test95___spirv_ocl_asinpi(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_asinpi(arg1);
}
// CHECK: call {{.*}} double @_Z18__spirv_ocl_asinpid(double {{.*}})
__spv_fp64_t test96___spirv_ocl_asinpi(__spv_fp64_t arg1) {
  return __spirv_ocl_asinpi(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z18__spirv_ocl_asinpiDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test97___spirv_ocl_asinpi(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_asinpi(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z18__spirv_ocl_asinpiDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test98___spirv_ocl_asinpi(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_asinpi(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z18__spirv_ocl_asinpiDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test99___spirv_ocl_asinpi(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_asinpi(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z18__spirv_ocl_asinpiDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test100___spirv_ocl_asinpi(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_asinpi(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z18__spirv_ocl_asinpiDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test101___spirv_ocl_asinpi(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_asinpi(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z18__spirv_ocl_asinpiDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z18__spirv_ocl_asinpiDh(half {{.*}})
__spv_fp16_t test102___spirv_ocl_asinpi(__spv_fp16_t arg1) {
  return __spirv_ocl_asinpi(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z18__spirv_ocl_asinpiDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z18__spirv_ocl_asinpiDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test103___spirv_ocl_asinpi(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_asinpi(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z18__spirv_ocl_asinpiDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z18__spirv_ocl_asinpiDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test104___spirv_ocl_asinpi(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_asinpi(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z18__spirv_ocl_asinpiDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z18__spirv_ocl_asinpiDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test105___spirv_ocl_asinpi(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_asinpi(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z18__spirv_ocl_asinpiDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z18__spirv_ocl_asinpiDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test106___spirv_ocl_asinpi(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_asinpi(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z18__spirv_ocl_asinpiDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z18__spirv_ocl_asinpiDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test107___spirv_ocl_asinpi(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_asinpi(arg1);
}
// Test __spirv_ocl_atan
// CHECK: call {{.*}} float @_Z16__spirv_ocl_atanf(float {{.*}})
__spv_fp32_t test108___spirv_ocl_atan(__spv_fp32_t arg1) {
  return __spirv_ocl_atan(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z16__spirv_ocl_atanDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test109___spirv_ocl_atan(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_atan(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z16__spirv_ocl_atanDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test110___spirv_ocl_atan(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_atan(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z16__spirv_ocl_atanDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test111___spirv_ocl_atan(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_atan(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z16__spirv_ocl_atanDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test112___spirv_ocl_atan(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_atan(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z16__spirv_ocl_atanDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test113___spirv_ocl_atan(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_atan(arg1);
}
// CHECK: call {{.*}} double @_Z16__spirv_ocl_atand(double {{.*}})
__spv_fp64_t test114___spirv_ocl_atan(__spv_fp64_t arg1) {
  return __spirv_ocl_atan(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z16__spirv_ocl_atanDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test115___spirv_ocl_atan(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_atan(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z16__spirv_ocl_atanDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test116___spirv_ocl_atan(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_atan(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z16__spirv_ocl_atanDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test117___spirv_ocl_atan(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_atan(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z16__spirv_ocl_atanDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test118___spirv_ocl_atan(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_atan(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z16__spirv_ocl_atanDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test119___spirv_ocl_atan(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_atan(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z16__spirv_ocl_atanDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z16__spirv_ocl_atanDh(half {{.*}})
__spv_fp16_t test120___spirv_ocl_atan(__spv_fp16_t arg1) {
  return __spirv_ocl_atan(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z16__spirv_ocl_atanDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z16__spirv_ocl_atanDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test121___spirv_ocl_atan(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_atan(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z16__spirv_ocl_atanDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z16__spirv_ocl_atanDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test122___spirv_ocl_atan(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_atan(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z16__spirv_ocl_atanDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z16__spirv_ocl_atanDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test123___spirv_ocl_atan(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_atan(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z16__spirv_ocl_atanDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z16__spirv_ocl_atanDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test124___spirv_ocl_atan(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_atan(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z16__spirv_ocl_atanDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z16__spirv_ocl_atanDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test125___spirv_ocl_atan(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_atan(arg1);
}
// Test __spirv_ocl_atanh
// CHECK: call {{.*}} float @_Z17__spirv_ocl_atanhf(float {{.*}})
__spv_fp32_t test126___spirv_ocl_atanh(__spv_fp32_t arg1) {
  return __spirv_ocl_atanh(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z17__spirv_ocl_atanhDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test127___spirv_ocl_atanh(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_atanh(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z17__spirv_ocl_atanhDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test128___spirv_ocl_atanh(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_atanh(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z17__spirv_ocl_atanhDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test129___spirv_ocl_atanh(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_atanh(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z17__spirv_ocl_atanhDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test130___spirv_ocl_atanh(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_atanh(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z17__spirv_ocl_atanhDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test131___spirv_ocl_atanh(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_atanh(arg1);
}
// CHECK: call {{.*}} double @_Z17__spirv_ocl_atanhd(double {{.*}})
__spv_fp64_t test132___spirv_ocl_atanh(__spv_fp64_t arg1) {
  return __spirv_ocl_atanh(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z17__spirv_ocl_atanhDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test133___spirv_ocl_atanh(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_atanh(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z17__spirv_ocl_atanhDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test134___spirv_ocl_atanh(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_atanh(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z17__spirv_ocl_atanhDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test135___spirv_ocl_atanh(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_atanh(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z17__spirv_ocl_atanhDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test136___spirv_ocl_atanh(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_atanh(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z17__spirv_ocl_atanhDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test137___spirv_ocl_atanh(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_atanh(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z17__spirv_ocl_atanhDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z17__spirv_ocl_atanhDh(half {{.*}})
__spv_fp16_t test138___spirv_ocl_atanh(__spv_fp16_t arg1) {
  return __spirv_ocl_atanh(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z17__spirv_ocl_atanhDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z17__spirv_ocl_atanhDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test139___spirv_ocl_atanh(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_atanh(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z17__spirv_ocl_atanhDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z17__spirv_ocl_atanhDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test140___spirv_ocl_atanh(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_atanh(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z17__spirv_ocl_atanhDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z17__spirv_ocl_atanhDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test141___spirv_ocl_atanh(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_atanh(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z17__spirv_ocl_atanhDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z17__spirv_ocl_atanhDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test142___spirv_ocl_atanh(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_atanh(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z17__spirv_ocl_atanhDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z17__spirv_ocl_atanhDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test143___spirv_ocl_atanh(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_atanh(arg1);
}
// Test __spirv_ocl_atanpi
// CHECK: call {{.*}} float @_Z18__spirv_ocl_atanpif(float {{.*}})
__spv_fp32_t test144___spirv_ocl_atanpi(__spv_fp32_t arg1) {
  return __spirv_ocl_atanpi(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z18__spirv_ocl_atanpiDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test145___spirv_ocl_atanpi(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_atanpi(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z18__spirv_ocl_atanpiDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test146___spirv_ocl_atanpi(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_atanpi(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z18__spirv_ocl_atanpiDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test147___spirv_ocl_atanpi(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_atanpi(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z18__spirv_ocl_atanpiDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test148___spirv_ocl_atanpi(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_atanpi(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z18__spirv_ocl_atanpiDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test149___spirv_ocl_atanpi(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_atanpi(arg1);
}
// CHECK: call {{.*}} double @_Z18__spirv_ocl_atanpid(double {{.*}})
__spv_fp64_t test150___spirv_ocl_atanpi(__spv_fp64_t arg1) {
  return __spirv_ocl_atanpi(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z18__spirv_ocl_atanpiDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test151___spirv_ocl_atanpi(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_atanpi(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z18__spirv_ocl_atanpiDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test152___spirv_ocl_atanpi(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_atanpi(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z18__spirv_ocl_atanpiDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test153___spirv_ocl_atanpi(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_atanpi(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z18__spirv_ocl_atanpiDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test154___spirv_ocl_atanpi(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_atanpi(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z18__spirv_ocl_atanpiDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test155___spirv_ocl_atanpi(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_atanpi(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z18__spirv_ocl_atanpiDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z18__spirv_ocl_atanpiDh(half {{.*}})
__spv_fp16_t test156___spirv_ocl_atanpi(__spv_fp16_t arg1) {
  return __spirv_ocl_atanpi(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z18__spirv_ocl_atanpiDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z18__spirv_ocl_atanpiDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test157___spirv_ocl_atanpi(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_atanpi(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z18__spirv_ocl_atanpiDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z18__spirv_ocl_atanpiDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test158___spirv_ocl_atanpi(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_atanpi(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z18__spirv_ocl_atanpiDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z18__spirv_ocl_atanpiDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test159___spirv_ocl_atanpi(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_atanpi(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z18__spirv_ocl_atanpiDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z18__spirv_ocl_atanpiDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test160___spirv_ocl_atanpi(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_atanpi(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z18__spirv_ocl_atanpiDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z18__spirv_ocl_atanpiDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test161___spirv_ocl_atanpi(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_atanpi(arg1);
}
// Test __spirv_ocl_cbrt
// CHECK: call {{.*}} float @_Z16__spirv_ocl_cbrtf(float {{.*}})
__spv_fp32_t test162___spirv_ocl_cbrt(__spv_fp32_t arg1) {
  return __spirv_ocl_cbrt(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z16__spirv_ocl_cbrtDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test163___spirv_ocl_cbrt(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_cbrt(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z16__spirv_ocl_cbrtDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test164___spirv_ocl_cbrt(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_cbrt(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z16__spirv_ocl_cbrtDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test165___spirv_ocl_cbrt(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_cbrt(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z16__spirv_ocl_cbrtDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test166___spirv_ocl_cbrt(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_cbrt(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z16__spirv_ocl_cbrtDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test167___spirv_ocl_cbrt(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_cbrt(arg1);
}
// CHECK: call {{.*}} double @_Z16__spirv_ocl_cbrtd(double {{.*}})
__spv_fp64_t test168___spirv_ocl_cbrt(__spv_fp64_t arg1) {
  return __spirv_ocl_cbrt(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z16__spirv_ocl_cbrtDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test169___spirv_ocl_cbrt(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_cbrt(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z16__spirv_ocl_cbrtDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test170___spirv_ocl_cbrt(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_cbrt(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z16__spirv_ocl_cbrtDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test171___spirv_ocl_cbrt(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_cbrt(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z16__spirv_ocl_cbrtDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test172___spirv_ocl_cbrt(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_cbrt(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z16__spirv_ocl_cbrtDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test173___spirv_ocl_cbrt(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_cbrt(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z16__spirv_ocl_cbrtDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z16__spirv_ocl_cbrtDh(half {{.*}})
__spv_fp16_t test174___spirv_ocl_cbrt(__spv_fp16_t arg1) {
  return __spirv_ocl_cbrt(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z16__spirv_ocl_cbrtDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z16__spirv_ocl_cbrtDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test175___spirv_ocl_cbrt(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_cbrt(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z16__spirv_ocl_cbrtDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z16__spirv_ocl_cbrtDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test176___spirv_ocl_cbrt(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_cbrt(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z16__spirv_ocl_cbrtDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z16__spirv_ocl_cbrtDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test177___spirv_ocl_cbrt(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_cbrt(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z16__spirv_ocl_cbrtDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z16__spirv_ocl_cbrtDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test178___spirv_ocl_cbrt(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_cbrt(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z16__spirv_ocl_cbrtDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z16__spirv_ocl_cbrtDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test179___spirv_ocl_cbrt(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_cbrt(arg1);
}
// Test __spirv_ocl_ceil
// CHECK: call {{.*}} float @_Z16__spirv_ocl_ceilf(float {{.*}})
__spv_fp32_t test180___spirv_ocl_ceil(__spv_fp32_t arg1) {
  return __spirv_ocl_ceil(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z16__spirv_ocl_ceilDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test181___spirv_ocl_ceil(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_ceil(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z16__spirv_ocl_ceilDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test182___spirv_ocl_ceil(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_ceil(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z16__spirv_ocl_ceilDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test183___spirv_ocl_ceil(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_ceil(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z16__spirv_ocl_ceilDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test184___spirv_ocl_ceil(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_ceil(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z16__spirv_ocl_ceilDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test185___spirv_ocl_ceil(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_ceil(arg1);
}
// CHECK: call {{.*}} double @_Z16__spirv_ocl_ceild(double {{.*}})
__spv_fp64_t test186___spirv_ocl_ceil(__spv_fp64_t arg1) {
  return __spirv_ocl_ceil(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z16__spirv_ocl_ceilDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test187___spirv_ocl_ceil(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_ceil(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z16__spirv_ocl_ceilDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test188___spirv_ocl_ceil(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_ceil(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z16__spirv_ocl_ceilDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test189___spirv_ocl_ceil(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_ceil(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z16__spirv_ocl_ceilDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test190___spirv_ocl_ceil(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_ceil(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z16__spirv_ocl_ceilDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test191___spirv_ocl_ceil(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_ceil(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z16__spirv_ocl_ceilDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z16__spirv_ocl_ceilDh(half {{.*}})
__spv_fp16_t test192___spirv_ocl_ceil(__spv_fp16_t arg1) {
  return __spirv_ocl_ceil(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z16__spirv_ocl_ceilDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z16__spirv_ocl_ceilDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test193___spirv_ocl_ceil(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_ceil(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z16__spirv_ocl_ceilDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z16__spirv_ocl_ceilDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test194___spirv_ocl_ceil(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_ceil(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z16__spirv_ocl_ceilDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z16__spirv_ocl_ceilDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test195___spirv_ocl_ceil(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_ceil(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z16__spirv_ocl_ceilDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z16__spirv_ocl_ceilDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test196___spirv_ocl_ceil(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_ceil(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z16__spirv_ocl_ceilDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z16__spirv_ocl_ceilDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test197___spirv_ocl_ceil(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_ceil(arg1);
}
// Test __spirv_ocl_cos
// CHECK: call {{.*}} float @_Z15__spirv_ocl_cosf(float {{.*}})
__spv_fp32_t test198___spirv_ocl_cos(__spv_fp32_t arg1) {
  return __spirv_ocl_cos(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z15__spirv_ocl_cosDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test199___spirv_ocl_cos(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_cos(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z15__spirv_ocl_cosDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test200___spirv_ocl_cos(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_cos(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z15__spirv_ocl_cosDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test201___spirv_ocl_cos(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_cos(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z15__spirv_ocl_cosDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test202___spirv_ocl_cos(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_cos(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z15__spirv_ocl_cosDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test203___spirv_ocl_cos(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_cos(arg1);
}
// CHECK: call {{.*}} double @_Z15__spirv_ocl_cosd(double {{.*}})
__spv_fp64_t test204___spirv_ocl_cos(__spv_fp64_t arg1) {
  return __spirv_ocl_cos(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z15__spirv_ocl_cosDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test205___spirv_ocl_cos(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_cos(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z15__spirv_ocl_cosDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test206___spirv_ocl_cos(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_cos(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z15__spirv_ocl_cosDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test207___spirv_ocl_cos(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_cos(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z15__spirv_ocl_cosDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test208___spirv_ocl_cos(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_cos(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z15__spirv_ocl_cosDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test209___spirv_ocl_cos(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_cos(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z15__spirv_ocl_cosDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z15__spirv_ocl_cosDh(half {{.*}})
__spv_fp16_t test210___spirv_ocl_cos(__spv_fp16_t arg1) {
  return __spirv_ocl_cos(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z15__spirv_ocl_cosDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z15__spirv_ocl_cosDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test211___spirv_ocl_cos(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_cos(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z15__spirv_ocl_cosDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z15__spirv_ocl_cosDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test212___spirv_ocl_cos(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_cos(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z15__spirv_ocl_cosDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z15__spirv_ocl_cosDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test213___spirv_ocl_cos(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_cos(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z15__spirv_ocl_cosDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z15__spirv_ocl_cosDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test214___spirv_ocl_cos(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_cos(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z15__spirv_ocl_cosDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z15__spirv_ocl_cosDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test215___spirv_ocl_cos(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_cos(arg1);
}
// Test __spirv_ocl_cosh
// CHECK: call {{.*}} float @_Z16__spirv_ocl_coshf(float {{.*}})
__spv_fp32_t test216___spirv_ocl_cosh(__spv_fp32_t arg1) {
  return __spirv_ocl_cosh(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z16__spirv_ocl_coshDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test217___spirv_ocl_cosh(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_cosh(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z16__spirv_ocl_coshDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test218___spirv_ocl_cosh(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_cosh(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z16__spirv_ocl_coshDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test219___spirv_ocl_cosh(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_cosh(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z16__spirv_ocl_coshDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test220___spirv_ocl_cosh(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_cosh(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z16__spirv_ocl_coshDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test221___spirv_ocl_cosh(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_cosh(arg1);
}
// CHECK: call {{.*}} double @_Z16__spirv_ocl_coshd(double {{.*}})
__spv_fp64_t test222___spirv_ocl_cosh(__spv_fp64_t arg1) {
  return __spirv_ocl_cosh(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z16__spirv_ocl_coshDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test223___spirv_ocl_cosh(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_cosh(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z16__spirv_ocl_coshDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test224___spirv_ocl_cosh(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_cosh(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z16__spirv_ocl_coshDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test225___spirv_ocl_cosh(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_cosh(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z16__spirv_ocl_coshDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test226___spirv_ocl_cosh(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_cosh(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z16__spirv_ocl_coshDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test227___spirv_ocl_cosh(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_cosh(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z16__spirv_ocl_coshDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z16__spirv_ocl_coshDh(half {{.*}})
__spv_fp16_t test228___spirv_ocl_cosh(__spv_fp16_t arg1) {
  return __spirv_ocl_cosh(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z16__spirv_ocl_coshDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z16__spirv_ocl_coshDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test229___spirv_ocl_cosh(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_cosh(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z16__spirv_ocl_coshDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z16__spirv_ocl_coshDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test230___spirv_ocl_cosh(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_cosh(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z16__spirv_ocl_coshDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z16__spirv_ocl_coshDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test231___spirv_ocl_cosh(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_cosh(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z16__spirv_ocl_coshDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z16__spirv_ocl_coshDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test232___spirv_ocl_cosh(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_cosh(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z16__spirv_ocl_coshDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z16__spirv_ocl_coshDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test233___spirv_ocl_cosh(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_cosh(arg1);
}
// Test __spirv_ocl_cospi
// CHECK: call {{.*}} float @_Z17__spirv_ocl_cospif(float {{.*}})
__spv_fp32_t test234___spirv_ocl_cospi(__spv_fp32_t arg1) {
  return __spirv_ocl_cospi(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z17__spirv_ocl_cospiDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test235___spirv_ocl_cospi(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_cospi(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z17__spirv_ocl_cospiDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test236___spirv_ocl_cospi(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_cospi(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z17__spirv_ocl_cospiDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test237___spirv_ocl_cospi(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_cospi(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z17__spirv_ocl_cospiDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test238___spirv_ocl_cospi(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_cospi(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z17__spirv_ocl_cospiDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test239___spirv_ocl_cospi(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_cospi(arg1);
}
// CHECK: call {{.*}} double @_Z17__spirv_ocl_cospid(double {{.*}})
__spv_fp64_t test240___spirv_ocl_cospi(__spv_fp64_t arg1) {
  return __spirv_ocl_cospi(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z17__spirv_ocl_cospiDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test241___spirv_ocl_cospi(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_cospi(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z17__spirv_ocl_cospiDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test242___spirv_ocl_cospi(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_cospi(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z17__spirv_ocl_cospiDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test243___spirv_ocl_cospi(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_cospi(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z17__spirv_ocl_cospiDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test244___spirv_ocl_cospi(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_cospi(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z17__spirv_ocl_cospiDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test245___spirv_ocl_cospi(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_cospi(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z17__spirv_ocl_cospiDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z17__spirv_ocl_cospiDh(half {{.*}})
__spv_fp16_t test246___spirv_ocl_cospi(__spv_fp16_t arg1) {
  return __spirv_ocl_cospi(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z17__spirv_ocl_cospiDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z17__spirv_ocl_cospiDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test247___spirv_ocl_cospi(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_cospi(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z17__spirv_ocl_cospiDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z17__spirv_ocl_cospiDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test248___spirv_ocl_cospi(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_cospi(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z17__spirv_ocl_cospiDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z17__spirv_ocl_cospiDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test249___spirv_ocl_cospi(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_cospi(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z17__spirv_ocl_cospiDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z17__spirv_ocl_cospiDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test250___spirv_ocl_cospi(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_cospi(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z17__spirv_ocl_cospiDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z17__spirv_ocl_cospiDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test251___spirv_ocl_cospi(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_cospi(arg1);
}
// Test __spirv_ocl_erfc
// CHECK: call {{.*}} float @_Z16__spirv_ocl_erfcf(float {{.*}})
__spv_fp32_t test252___spirv_ocl_erfc(__spv_fp32_t arg1) {
  return __spirv_ocl_erfc(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z16__spirv_ocl_erfcDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test253___spirv_ocl_erfc(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_erfc(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z16__spirv_ocl_erfcDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test254___spirv_ocl_erfc(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_erfc(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z16__spirv_ocl_erfcDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test255___spirv_ocl_erfc(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_erfc(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z16__spirv_ocl_erfcDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test256___spirv_ocl_erfc(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_erfc(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z16__spirv_ocl_erfcDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test257___spirv_ocl_erfc(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_erfc(arg1);
}
// CHECK: call {{.*}} double @_Z16__spirv_ocl_erfcd(double {{.*}})
__spv_fp64_t test258___spirv_ocl_erfc(__spv_fp64_t arg1) {
  return __spirv_ocl_erfc(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z16__spirv_ocl_erfcDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test259___spirv_ocl_erfc(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_erfc(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z16__spirv_ocl_erfcDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test260___spirv_ocl_erfc(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_erfc(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z16__spirv_ocl_erfcDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test261___spirv_ocl_erfc(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_erfc(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z16__spirv_ocl_erfcDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test262___spirv_ocl_erfc(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_erfc(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z16__spirv_ocl_erfcDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test263___spirv_ocl_erfc(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_erfc(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z16__spirv_ocl_erfcDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z16__spirv_ocl_erfcDh(half {{.*}})
__spv_fp16_t test264___spirv_ocl_erfc(__spv_fp16_t arg1) {
  return __spirv_ocl_erfc(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z16__spirv_ocl_erfcDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z16__spirv_ocl_erfcDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test265___spirv_ocl_erfc(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_erfc(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z16__spirv_ocl_erfcDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z16__spirv_ocl_erfcDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test266___spirv_ocl_erfc(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_erfc(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z16__spirv_ocl_erfcDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z16__spirv_ocl_erfcDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test267___spirv_ocl_erfc(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_erfc(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z16__spirv_ocl_erfcDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z16__spirv_ocl_erfcDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test268___spirv_ocl_erfc(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_erfc(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z16__spirv_ocl_erfcDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z16__spirv_ocl_erfcDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test269___spirv_ocl_erfc(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_erfc(arg1);
}
// Test __spirv_ocl_erf
// CHECK: call {{.*}} float @_Z15__spirv_ocl_erff(float {{.*}})
__spv_fp32_t test270___spirv_ocl_erf(__spv_fp32_t arg1) {
  return __spirv_ocl_erf(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z15__spirv_ocl_erfDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test271___spirv_ocl_erf(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_erf(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z15__spirv_ocl_erfDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test272___spirv_ocl_erf(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_erf(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z15__spirv_ocl_erfDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test273___spirv_ocl_erf(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_erf(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z15__spirv_ocl_erfDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test274___spirv_ocl_erf(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_erf(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z15__spirv_ocl_erfDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test275___spirv_ocl_erf(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_erf(arg1);
}
// CHECK: call {{.*}} double @_Z15__spirv_ocl_erfd(double {{.*}})
__spv_fp64_t test276___spirv_ocl_erf(__spv_fp64_t arg1) {
  return __spirv_ocl_erf(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z15__spirv_ocl_erfDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test277___spirv_ocl_erf(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_erf(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z15__spirv_ocl_erfDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test278___spirv_ocl_erf(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_erf(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z15__spirv_ocl_erfDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test279___spirv_ocl_erf(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_erf(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z15__spirv_ocl_erfDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test280___spirv_ocl_erf(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_erf(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z15__spirv_ocl_erfDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test281___spirv_ocl_erf(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_erf(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z15__spirv_ocl_erfDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z15__spirv_ocl_erfDh(half {{.*}})
__spv_fp16_t test282___spirv_ocl_erf(__spv_fp16_t arg1) {
  return __spirv_ocl_erf(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z15__spirv_ocl_erfDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z15__spirv_ocl_erfDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test283___spirv_ocl_erf(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_erf(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z15__spirv_ocl_erfDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z15__spirv_ocl_erfDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test284___spirv_ocl_erf(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_erf(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z15__spirv_ocl_erfDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z15__spirv_ocl_erfDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test285___spirv_ocl_erf(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_erf(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z15__spirv_ocl_erfDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z15__spirv_ocl_erfDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test286___spirv_ocl_erf(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_erf(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z15__spirv_ocl_erfDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z15__spirv_ocl_erfDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test287___spirv_ocl_erf(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_erf(arg1);
}
// Test __spirv_ocl_exp
// CHECK: call {{.*}} float @_Z15__spirv_ocl_expf(float {{.*}})
__spv_fp32_t test288___spirv_ocl_exp(__spv_fp32_t arg1) {
  return __spirv_ocl_exp(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z15__spirv_ocl_expDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test289___spirv_ocl_exp(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_exp(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z15__spirv_ocl_expDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test290___spirv_ocl_exp(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_exp(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z15__spirv_ocl_expDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test291___spirv_ocl_exp(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_exp(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z15__spirv_ocl_expDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test292___spirv_ocl_exp(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_exp(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z15__spirv_ocl_expDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test293___spirv_ocl_exp(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_exp(arg1);
}
// CHECK: call {{.*}} double @_Z15__spirv_ocl_expd(double {{.*}})
__spv_fp64_t test294___spirv_ocl_exp(__spv_fp64_t arg1) {
  return __spirv_ocl_exp(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z15__spirv_ocl_expDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test295___spirv_ocl_exp(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_exp(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z15__spirv_ocl_expDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test296___spirv_ocl_exp(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_exp(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z15__spirv_ocl_expDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test297___spirv_ocl_exp(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_exp(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z15__spirv_ocl_expDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test298___spirv_ocl_exp(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_exp(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z15__spirv_ocl_expDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test299___spirv_ocl_exp(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_exp(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z15__spirv_ocl_expDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z15__spirv_ocl_expDh(half {{.*}})
__spv_fp16_t test300___spirv_ocl_exp(__spv_fp16_t arg1) {
  return __spirv_ocl_exp(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z15__spirv_ocl_expDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z15__spirv_ocl_expDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test301___spirv_ocl_exp(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_exp(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z15__spirv_ocl_expDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z15__spirv_ocl_expDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test302___spirv_ocl_exp(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_exp(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z15__spirv_ocl_expDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z15__spirv_ocl_expDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test303___spirv_ocl_exp(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_exp(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z15__spirv_ocl_expDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z15__spirv_ocl_expDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test304___spirv_ocl_exp(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_exp(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z15__spirv_ocl_expDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z15__spirv_ocl_expDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test305___spirv_ocl_exp(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_exp(arg1);
}
// Test __spirv_ocl_exp2
// CHECK: call {{.*}} float @_Z16__spirv_ocl_exp2f(float {{.*}})
__spv_fp32_t test306___spirv_ocl_exp2(__spv_fp32_t arg1) {
  return __spirv_ocl_exp2(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z16__spirv_ocl_exp2Dv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test307___spirv_ocl_exp2(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_exp2(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z16__spirv_ocl_exp2Dv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test308___spirv_ocl_exp2(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_exp2(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z16__spirv_ocl_exp2Dv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test309___spirv_ocl_exp2(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_exp2(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z16__spirv_ocl_exp2Dv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test310___spirv_ocl_exp2(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_exp2(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z16__spirv_ocl_exp2Dv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test311___spirv_ocl_exp2(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_exp2(arg1);
}
// CHECK: call {{.*}} double @_Z16__spirv_ocl_exp2d(double {{.*}})
__spv_fp64_t test312___spirv_ocl_exp2(__spv_fp64_t arg1) {
  return __spirv_ocl_exp2(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z16__spirv_ocl_exp2Dv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test313___spirv_ocl_exp2(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_exp2(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z16__spirv_ocl_exp2Dv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test314___spirv_ocl_exp2(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_exp2(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z16__spirv_ocl_exp2Dv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test315___spirv_ocl_exp2(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_exp2(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z16__spirv_ocl_exp2Dv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test316___spirv_ocl_exp2(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_exp2(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z16__spirv_ocl_exp2Dv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test317___spirv_ocl_exp2(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_exp2(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z16__spirv_ocl_exp2DF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z16__spirv_ocl_exp2Dh(half {{.*}})
__spv_fp16_t test318___spirv_ocl_exp2(__spv_fp16_t arg1) {
  return __spirv_ocl_exp2(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z16__spirv_ocl_exp2Dv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z16__spirv_ocl_exp2Dv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test319___spirv_ocl_exp2(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_exp2(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z16__spirv_ocl_exp2Dv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z16__spirv_ocl_exp2Dv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test320___spirv_ocl_exp2(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_exp2(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z16__spirv_ocl_exp2Dv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z16__spirv_ocl_exp2Dv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test321___spirv_ocl_exp2(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_exp2(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z16__spirv_ocl_exp2Dv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z16__spirv_ocl_exp2Dv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test322___spirv_ocl_exp2(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_exp2(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z16__spirv_ocl_exp2Dv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z16__spirv_ocl_exp2Dv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test323___spirv_ocl_exp2(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_exp2(arg1);
}
// Test __spirv_ocl_exp10
// CHECK: call {{.*}} float @_Z17__spirv_ocl_exp10f(float {{.*}})
__spv_fp32_t test324___spirv_ocl_exp10(__spv_fp32_t arg1) {
  return __spirv_ocl_exp10(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z17__spirv_ocl_exp10Dv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test325___spirv_ocl_exp10(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_exp10(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z17__spirv_ocl_exp10Dv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test326___spirv_ocl_exp10(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_exp10(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z17__spirv_ocl_exp10Dv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test327___spirv_ocl_exp10(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_exp10(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z17__spirv_ocl_exp10Dv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test328___spirv_ocl_exp10(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_exp10(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z17__spirv_ocl_exp10Dv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test329___spirv_ocl_exp10(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_exp10(arg1);
}
// CHECK: call {{.*}} double @_Z17__spirv_ocl_exp10d(double {{.*}})
__spv_fp64_t test330___spirv_ocl_exp10(__spv_fp64_t arg1) {
  return __spirv_ocl_exp10(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z17__spirv_ocl_exp10Dv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test331___spirv_ocl_exp10(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_exp10(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z17__spirv_ocl_exp10Dv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test332___spirv_ocl_exp10(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_exp10(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z17__spirv_ocl_exp10Dv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test333___spirv_ocl_exp10(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_exp10(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z17__spirv_ocl_exp10Dv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test334___spirv_ocl_exp10(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_exp10(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z17__spirv_ocl_exp10Dv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test335___spirv_ocl_exp10(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_exp10(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z17__spirv_ocl_exp10DF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z17__spirv_ocl_exp10Dh(half {{.*}})
__spv_fp16_t test336___spirv_ocl_exp10(__spv_fp16_t arg1) {
  return __spirv_ocl_exp10(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z17__spirv_ocl_exp10Dv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z17__spirv_ocl_exp10Dv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test337___spirv_ocl_exp10(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_exp10(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z17__spirv_ocl_exp10Dv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z17__spirv_ocl_exp10Dv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test338___spirv_ocl_exp10(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_exp10(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z17__spirv_ocl_exp10Dv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z17__spirv_ocl_exp10Dv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test339___spirv_ocl_exp10(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_exp10(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z17__spirv_ocl_exp10Dv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z17__spirv_ocl_exp10Dv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test340___spirv_ocl_exp10(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_exp10(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z17__spirv_ocl_exp10Dv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z17__spirv_ocl_exp10Dv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test341___spirv_ocl_exp10(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_exp10(arg1);
}
// Test __spirv_ocl_expm1
// CHECK: call {{.*}} float @_Z17__spirv_ocl_expm1f(float {{.*}})
__spv_fp32_t test342___spirv_ocl_expm1(__spv_fp32_t arg1) {
  return __spirv_ocl_expm1(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z17__spirv_ocl_expm1Dv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test343___spirv_ocl_expm1(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_expm1(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z17__spirv_ocl_expm1Dv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test344___spirv_ocl_expm1(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_expm1(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z17__spirv_ocl_expm1Dv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test345___spirv_ocl_expm1(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_expm1(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z17__spirv_ocl_expm1Dv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test346___spirv_ocl_expm1(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_expm1(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z17__spirv_ocl_expm1Dv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test347___spirv_ocl_expm1(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_expm1(arg1);
}
// CHECK: call {{.*}} double @_Z17__spirv_ocl_expm1d(double {{.*}})
__spv_fp64_t test348___spirv_ocl_expm1(__spv_fp64_t arg1) {
  return __spirv_ocl_expm1(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z17__spirv_ocl_expm1Dv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test349___spirv_ocl_expm1(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_expm1(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z17__spirv_ocl_expm1Dv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test350___spirv_ocl_expm1(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_expm1(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z17__spirv_ocl_expm1Dv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test351___spirv_ocl_expm1(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_expm1(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z17__spirv_ocl_expm1Dv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test352___spirv_ocl_expm1(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_expm1(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z17__spirv_ocl_expm1Dv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test353___spirv_ocl_expm1(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_expm1(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z17__spirv_ocl_expm1DF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z17__spirv_ocl_expm1Dh(half {{.*}})
__spv_fp16_t test354___spirv_ocl_expm1(__spv_fp16_t arg1) {
  return __spirv_ocl_expm1(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z17__spirv_ocl_expm1Dv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z17__spirv_ocl_expm1Dv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test355___spirv_ocl_expm1(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_expm1(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z17__spirv_ocl_expm1Dv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z17__spirv_ocl_expm1Dv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test356___spirv_ocl_expm1(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_expm1(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z17__spirv_ocl_expm1Dv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z17__spirv_ocl_expm1Dv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test357___spirv_ocl_expm1(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_expm1(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z17__spirv_ocl_expm1Dv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z17__spirv_ocl_expm1Dv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test358___spirv_ocl_expm1(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_expm1(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z17__spirv_ocl_expm1Dv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z17__spirv_ocl_expm1Dv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test359___spirv_ocl_expm1(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_expm1(arg1);
}
// Test __spirv_ocl_fabs
// CHECK: call {{.*}} float @_Z16__spirv_ocl_fabsf(float {{.*}})
__spv_fp32_t test360___spirv_ocl_fabs(__spv_fp32_t arg1) {
  return __spirv_ocl_fabs(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z16__spirv_ocl_fabsDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test361___spirv_ocl_fabs(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_fabs(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z16__spirv_ocl_fabsDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test362___spirv_ocl_fabs(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_fabs(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z16__spirv_ocl_fabsDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test363___spirv_ocl_fabs(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_fabs(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z16__spirv_ocl_fabsDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test364___spirv_ocl_fabs(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_fabs(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z16__spirv_ocl_fabsDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test365___spirv_ocl_fabs(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_fabs(arg1);
}
// CHECK: call {{.*}} double @_Z16__spirv_ocl_fabsd(double {{.*}})
__spv_fp64_t test366___spirv_ocl_fabs(__spv_fp64_t arg1) {
  return __spirv_ocl_fabs(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z16__spirv_ocl_fabsDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test367___spirv_ocl_fabs(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_fabs(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z16__spirv_ocl_fabsDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test368___spirv_ocl_fabs(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_fabs(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z16__spirv_ocl_fabsDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test369___spirv_ocl_fabs(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_fabs(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z16__spirv_ocl_fabsDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test370___spirv_ocl_fabs(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_fabs(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z16__spirv_ocl_fabsDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test371___spirv_ocl_fabs(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_fabs(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z16__spirv_ocl_fabsDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z16__spirv_ocl_fabsDh(half {{.*}})
__spv_fp16_t test372___spirv_ocl_fabs(__spv_fp16_t arg1) {
  return __spirv_ocl_fabs(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z16__spirv_ocl_fabsDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z16__spirv_ocl_fabsDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test373___spirv_ocl_fabs(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_fabs(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z16__spirv_ocl_fabsDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z16__spirv_ocl_fabsDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test374___spirv_ocl_fabs(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_fabs(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z16__spirv_ocl_fabsDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z16__spirv_ocl_fabsDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test375___spirv_ocl_fabs(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_fabs(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z16__spirv_ocl_fabsDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z16__spirv_ocl_fabsDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test376___spirv_ocl_fabs(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_fabs(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z16__spirv_ocl_fabsDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z16__spirv_ocl_fabsDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test377___spirv_ocl_fabs(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_fabs(arg1);
}
// Test __spirv_ocl_floor
// CHECK: call {{.*}} float @_Z17__spirv_ocl_floorf(float {{.*}})
__spv_fp32_t test378___spirv_ocl_floor(__spv_fp32_t arg1) {
  return __spirv_ocl_floor(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z17__spirv_ocl_floorDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test379___spirv_ocl_floor(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_floor(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z17__spirv_ocl_floorDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test380___spirv_ocl_floor(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_floor(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z17__spirv_ocl_floorDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test381___spirv_ocl_floor(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_floor(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z17__spirv_ocl_floorDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test382___spirv_ocl_floor(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_floor(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z17__spirv_ocl_floorDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test383___spirv_ocl_floor(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_floor(arg1);
}
// CHECK: call {{.*}} double @_Z17__spirv_ocl_floord(double {{.*}})
__spv_fp64_t test384___spirv_ocl_floor(__spv_fp64_t arg1) {
  return __spirv_ocl_floor(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z17__spirv_ocl_floorDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test385___spirv_ocl_floor(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_floor(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z17__spirv_ocl_floorDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test386___spirv_ocl_floor(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_floor(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z17__spirv_ocl_floorDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test387___spirv_ocl_floor(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_floor(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z17__spirv_ocl_floorDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test388___spirv_ocl_floor(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_floor(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z17__spirv_ocl_floorDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test389___spirv_ocl_floor(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_floor(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z17__spirv_ocl_floorDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z17__spirv_ocl_floorDh(half {{.*}})
__spv_fp16_t test390___spirv_ocl_floor(__spv_fp16_t arg1) {
  return __spirv_ocl_floor(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z17__spirv_ocl_floorDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z17__spirv_ocl_floorDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test391___spirv_ocl_floor(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_floor(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z17__spirv_ocl_floorDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z17__spirv_ocl_floorDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test392___spirv_ocl_floor(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_floor(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z17__spirv_ocl_floorDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z17__spirv_ocl_floorDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test393___spirv_ocl_floor(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_floor(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z17__spirv_ocl_floorDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z17__spirv_ocl_floorDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test394___spirv_ocl_floor(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_floor(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z17__spirv_ocl_floorDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z17__spirv_ocl_floorDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test395___spirv_ocl_floor(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_floor(arg1);
}
// Test __spirv_ocl_lgamma
// CHECK: call {{.*}} float @_Z18__spirv_ocl_lgammaf(float {{.*}})
__spv_fp32_t test396___spirv_ocl_lgamma(__spv_fp32_t arg1) {
  return __spirv_ocl_lgamma(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z18__spirv_ocl_lgammaDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test397___spirv_ocl_lgamma(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_lgamma(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z18__spirv_ocl_lgammaDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test398___spirv_ocl_lgamma(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_lgamma(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z18__spirv_ocl_lgammaDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test399___spirv_ocl_lgamma(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_lgamma(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z18__spirv_ocl_lgammaDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test400___spirv_ocl_lgamma(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_lgamma(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z18__spirv_ocl_lgammaDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test401___spirv_ocl_lgamma(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_lgamma(arg1);
}
// CHECK: call {{.*}} double @_Z18__spirv_ocl_lgammad(double {{.*}})
__spv_fp64_t test402___spirv_ocl_lgamma(__spv_fp64_t arg1) {
  return __spirv_ocl_lgamma(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z18__spirv_ocl_lgammaDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test403___spirv_ocl_lgamma(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_lgamma(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z18__spirv_ocl_lgammaDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test404___spirv_ocl_lgamma(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_lgamma(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z18__spirv_ocl_lgammaDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test405___spirv_ocl_lgamma(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_lgamma(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z18__spirv_ocl_lgammaDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test406___spirv_ocl_lgamma(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_lgamma(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z18__spirv_ocl_lgammaDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test407___spirv_ocl_lgamma(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_lgamma(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z18__spirv_ocl_lgammaDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z18__spirv_ocl_lgammaDh(half {{.*}})
__spv_fp16_t test408___spirv_ocl_lgamma(__spv_fp16_t arg1) {
  return __spirv_ocl_lgamma(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z18__spirv_ocl_lgammaDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z18__spirv_ocl_lgammaDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test409___spirv_ocl_lgamma(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_lgamma(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z18__spirv_ocl_lgammaDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z18__spirv_ocl_lgammaDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test410___spirv_ocl_lgamma(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_lgamma(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z18__spirv_ocl_lgammaDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z18__spirv_ocl_lgammaDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test411___spirv_ocl_lgamma(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_lgamma(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z18__spirv_ocl_lgammaDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z18__spirv_ocl_lgammaDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test412___spirv_ocl_lgamma(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_lgamma(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z18__spirv_ocl_lgammaDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z18__spirv_ocl_lgammaDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test413___spirv_ocl_lgamma(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_lgamma(arg1);
}
// Test __spirv_ocl_log
// CHECK: call {{.*}} float @_Z15__spirv_ocl_logf(float {{.*}})
__spv_fp32_t test414___spirv_ocl_log(__spv_fp32_t arg1) {
  return __spirv_ocl_log(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z15__spirv_ocl_logDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test415___spirv_ocl_log(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_log(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z15__spirv_ocl_logDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test416___spirv_ocl_log(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_log(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z15__spirv_ocl_logDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test417___spirv_ocl_log(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_log(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z15__spirv_ocl_logDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test418___spirv_ocl_log(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_log(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z15__spirv_ocl_logDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test419___spirv_ocl_log(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_log(arg1);
}
// CHECK: call {{.*}} double @_Z15__spirv_ocl_logd(double {{.*}})
__spv_fp64_t test420___spirv_ocl_log(__spv_fp64_t arg1) {
  return __spirv_ocl_log(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z15__spirv_ocl_logDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test421___spirv_ocl_log(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_log(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z15__spirv_ocl_logDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test422___spirv_ocl_log(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_log(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z15__spirv_ocl_logDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test423___spirv_ocl_log(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_log(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z15__spirv_ocl_logDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test424___spirv_ocl_log(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_log(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z15__spirv_ocl_logDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test425___spirv_ocl_log(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_log(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z15__spirv_ocl_logDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z15__spirv_ocl_logDh(half {{.*}})
__spv_fp16_t test426___spirv_ocl_log(__spv_fp16_t arg1) {
  return __spirv_ocl_log(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z15__spirv_ocl_logDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z15__spirv_ocl_logDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test427___spirv_ocl_log(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_log(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z15__spirv_ocl_logDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z15__spirv_ocl_logDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test428___spirv_ocl_log(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_log(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z15__spirv_ocl_logDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z15__spirv_ocl_logDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test429___spirv_ocl_log(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_log(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z15__spirv_ocl_logDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z15__spirv_ocl_logDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test430___spirv_ocl_log(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_log(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z15__spirv_ocl_logDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z15__spirv_ocl_logDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test431___spirv_ocl_log(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_log(arg1);
}
// Test __spirv_ocl_log2
// CHECK: call {{.*}} float @_Z16__spirv_ocl_log2f(float {{.*}})
__spv_fp32_t test432___spirv_ocl_log2(__spv_fp32_t arg1) {
  return __spirv_ocl_log2(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z16__spirv_ocl_log2Dv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test433___spirv_ocl_log2(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_log2(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z16__spirv_ocl_log2Dv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test434___spirv_ocl_log2(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_log2(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z16__spirv_ocl_log2Dv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test435___spirv_ocl_log2(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_log2(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z16__spirv_ocl_log2Dv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test436___spirv_ocl_log2(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_log2(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z16__spirv_ocl_log2Dv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test437___spirv_ocl_log2(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_log2(arg1);
}
// CHECK: call {{.*}} double @_Z16__spirv_ocl_log2d(double {{.*}})
__spv_fp64_t test438___spirv_ocl_log2(__spv_fp64_t arg1) {
  return __spirv_ocl_log2(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z16__spirv_ocl_log2Dv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test439___spirv_ocl_log2(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_log2(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z16__spirv_ocl_log2Dv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test440___spirv_ocl_log2(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_log2(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z16__spirv_ocl_log2Dv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test441___spirv_ocl_log2(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_log2(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z16__spirv_ocl_log2Dv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test442___spirv_ocl_log2(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_log2(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z16__spirv_ocl_log2Dv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test443___spirv_ocl_log2(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_log2(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z16__spirv_ocl_log2DF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z16__spirv_ocl_log2Dh(half {{.*}})
__spv_fp16_t test444___spirv_ocl_log2(__spv_fp16_t arg1) {
  return __spirv_ocl_log2(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z16__spirv_ocl_log2Dv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z16__spirv_ocl_log2Dv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test445___spirv_ocl_log2(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_log2(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z16__spirv_ocl_log2Dv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z16__spirv_ocl_log2Dv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test446___spirv_ocl_log2(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_log2(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z16__spirv_ocl_log2Dv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z16__spirv_ocl_log2Dv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test447___spirv_ocl_log2(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_log2(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z16__spirv_ocl_log2Dv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z16__spirv_ocl_log2Dv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test448___spirv_ocl_log2(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_log2(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z16__spirv_ocl_log2Dv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z16__spirv_ocl_log2Dv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test449___spirv_ocl_log2(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_log2(arg1);
}
// Test __spirv_ocl_log10
// CHECK: call {{.*}} float @_Z17__spirv_ocl_log10f(float {{.*}})
__spv_fp32_t test450___spirv_ocl_log10(__spv_fp32_t arg1) {
  return __spirv_ocl_log10(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z17__spirv_ocl_log10Dv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test451___spirv_ocl_log10(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_log10(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z17__spirv_ocl_log10Dv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test452___spirv_ocl_log10(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_log10(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z17__spirv_ocl_log10Dv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test453___spirv_ocl_log10(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_log10(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z17__spirv_ocl_log10Dv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test454___spirv_ocl_log10(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_log10(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z17__spirv_ocl_log10Dv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test455___spirv_ocl_log10(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_log10(arg1);
}
// CHECK: call {{.*}} double @_Z17__spirv_ocl_log10d(double {{.*}})
__spv_fp64_t test456___spirv_ocl_log10(__spv_fp64_t arg1) {
  return __spirv_ocl_log10(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z17__spirv_ocl_log10Dv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test457___spirv_ocl_log10(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_log10(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z17__spirv_ocl_log10Dv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test458___spirv_ocl_log10(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_log10(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z17__spirv_ocl_log10Dv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test459___spirv_ocl_log10(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_log10(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z17__spirv_ocl_log10Dv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test460___spirv_ocl_log10(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_log10(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z17__spirv_ocl_log10Dv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test461___spirv_ocl_log10(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_log10(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z17__spirv_ocl_log10DF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z17__spirv_ocl_log10Dh(half {{.*}})
__spv_fp16_t test462___spirv_ocl_log10(__spv_fp16_t arg1) {
  return __spirv_ocl_log10(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z17__spirv_ocl_log10Dv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z17__spirv_ocl_log10Dv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test463___spirv_ocl_log10(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_log10(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z17__spirv_ocl_log10Dv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z17__spirv_ocl_log10Dv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test464___spirv_ocl_log10(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_log10(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z17__spirv_ocl_log10Dv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z17__spirv_ocl_log10Dv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test465___spirv_ocl_log10(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_log10(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z17__spirv_ocl_log10Dv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z17__spirv_ocl_log10Dv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test466___spirv_ocl_log10(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_log10(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z17__spirv_ocl_log10Dv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z17__spirv_ocl_log10Dv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test467___spirv_ocl_log10(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_log10(arg1);
}
// Test __spirv_ocl_log1p
// CHECK: call {{.*}} float @_Z17__spirv_ocl_log1pf(float {{.*}})
__spv_fp32_t test468___spirv_ocl_log1p(__spv_fp32_t arg1) {
  return __spirv_ocl_log1p(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z17__spirv_ocl_log1pDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test469___spirv_ocl_log1p(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_log1p(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z17__spirv_ocl_log1pDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test470___spirv_ocl_log1p(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_log1p(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z17__spirv_ocl_log1pDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test471___spirv_ocl_log1p(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_log1p(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z17__spirv_ocl_log1pDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test472___spirv_ocl_log1p(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_log1p(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z17__spirv_ocl_log1pDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test473___spirv_ocl_log1p(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_log1p(arg1);
}
// CHECK: call {{.*}} double @_Z17__spirv_ocl_log1pd(double {{.*}})
__spv_fp64_t test474___spirv_ocl_log1p(__spv_fp64_t arg1) {
  return __spirv_ocl_log1p(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z17__spirv_ocl_log1pDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test475___spirv_ocl_log1p(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_log1p(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z17__spirv_ocl_log1pDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test476___spirv_ocl_log1p(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_log1p(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z17__spirv_ocl_log1pDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test477___spirv_ocl_log1p(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_log1p(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z17__spirv_ocl_log1pDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test478___spirv_ocl_log1p(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_log1p(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z17__spirv_ocl_log1pDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test479___spirv_ocl_log1p(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_log1p(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z17__spirv_ocl_log1pDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z17__spirv_ocl_log1pDh(half {{.*}})
__spv_fp16_t test480___spirv_ocl_log1p(__spv_fp16_t arg1) {
  return __spirv_ocl_log1p(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z17__spirv_ocl_log1pDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z17__spirv_ocl_log1pDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test481___spirv_ocl_log1p(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_log1p(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z17__spirv_ocl_log1pDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z17__spirv_ocl_log1pDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test482___spirv_ocl_log1p(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_log1p(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z17__spirv_ocl_log1pDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z17__spirv_ocl_log1pDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test483___spirv_ocl_log1p(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_log1p(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z17__spirv_ocl_log1pDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z17__spirv_ocl_log1pDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test484___spirv_ocl_log1p(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_log1p(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z17__spirv_ocl_log1pDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z17__spirv_ocl_log1pDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test485___spirv_ocl_log1p(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_log1p(arg1);
}
// Test __spirv_ocl_logb
// CHECK: call {{.*}} float @_Z16__spirv_ocl_logbf(float {{.*}})
__spv_fp32_t test486___spirv_ocl_logb(__spv_fp32_t arg1) {
  return __spirv_ocl_logb(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z16__spirv_ocl_logbDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test487___spirv_ocl_logb(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_logb(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z16__spirv_ocl_logbDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test488___spirv_ocl_logb(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_logb(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z16__spirv_ocl_logbDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test489___spirv_ocl_logb(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_logb(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z16__spirv_ocl_logbDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test490___spirv_ocl_logb(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_logb(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z16__spirv_ocl_logbDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test491___spirv_ocl_logb(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_logb(arg1);
}
// CHECK: call {{.*}} double @_Z16__spirv_ocl_logbd(double {{.*}})
__spv_fp64_t test492___spirv_ocl_logb(__spv_fp64_t arg1) {
  return __spirv_ocl_logb(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z16__spirv_ocl_logbDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test493___spirv_ocl_logb(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_logb(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z16__spirv_ocl_logbDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test494___spirv_ocl_logb(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_logb(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z16__spirv_ocl_logbDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test495___spirv_ocl_logb(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_logb(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z16__spirv_ocl_logbDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test496___spirv_ocl_logb(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_logb(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z16__spirv_ocl_logbDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test497___spirv_ocl_logb(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_logb(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z16__spirv_ocl_logbDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z16__spirv_ocl_logbDh(half {{.*}})
__spv_fp16_t test498___spirv_ocl_logb(__spv_fp16_t arg1) {
  return __spirv_ocl_logb(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z16__spirv_ocl_logbDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z16__spirv_ocl_logbDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test499___spirv_ocl_logb(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_logb(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z16__spirv_ocl_logbDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z16__spirv_ocl_logbDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test500___spirv_ocl_logb(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_logb(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z16__spirv_ocl_logbDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z16__spirv_ocl_logbDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test501___spirv_ocl_logb(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_logb(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z16__spirv_ocl_logbDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z16__spirv_ocl_logbDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test502___spirv_ocl_logb(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_logb(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z16__spirv_ocl_logbDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z16__spirv_ocl_logbDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test503___spirv_ocl_logb(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_logb(arg1);
}
// Test __spirv_ocl_rint
// CHECK: call {{.*}} float @_Z16__spirv_ocl_rintf(float {{.*}})
__spv_fp32_t test504___spirv_ocl_rint(__spv_fp32_t arg1) {
  return __spirv_ocl_rint(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z16__spirv_ocl_rintDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test505___spirv_ocl_rint(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_rint(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z16__spirv_ocl_rintDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test506___spirv_ocl_rint(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_rint(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z16__spirv_ocl_rintDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test507___spirv_ocl_rint(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_rint(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z16__spirv_ocl_rintDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test508___spirv_ocl_rint(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_rint(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z16__spirv_ocl_rintDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test509___spirv_ocl_rint(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_rint(arg1);
}
// CHECK: call {{.*}} double @_Z16__spirv_ocl_rintd(double {{.*}})
__spv_fp64_t test510___spirv_ocl_rint(__spv_fp64_t arg1) {
  return __spirv_ocl_rint(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z16__spirv_ocl_rintDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test511___spirv_ocl_rint(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_rint(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z16__spirv_ocl_rintDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test512___spirv_ocl_rint(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_rint(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z16__spirv_ocl_rintDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test513___spirv_ocl_rint(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_rint(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z16__spirv_ocl_rintDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test514___spirv_ocl_rint(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_rint(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z16__spirv_ocl_rintDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test515___spirv_ocl_rint(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_rint(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z16__spirv_ocl_rintDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z16__spirv_ocl_rintDh(half {{.*}})
__spv_fp16_t test516___spirv_ocl_rint(__spv_fp16_t arg1) {
  return __spirv_ocl_rint(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z16__spirv_ocl_rintDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z16__spirv_ocl_rintDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test517___spirv_ocl_rint(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_rint(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z16__spirv_ocl_rintDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z16__spirv_ocl_rintDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test518___spirv_ocl_rint(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_rint(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z16__spirv_ocl_rintDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z16__spirv_ocl_rintDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test519___spirv_ocl_rint(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_rint(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z16__spirv_ocl_rintDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z16__spirv_ocl_rintDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test520___spirv_ocl_rint(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_rint(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z16__spirv_ocl_rintDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z16__spirv_ocl_rintDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test521___spirv_ocl_rint(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_rint(arg1);
}
// Test __spirv_ocl_round
// CHECK: call {{.*}} float @_Z17__spirv_ocl_roundf(float {{.*}})
__spv_fp32_t test522___spirv_ocl_round(__spv_fp32_t arg1) {
  return __spirv_ocl_round(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z17__spirv_ocl_roundDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test523___spirv_ocl_round(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_round(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z17__spirv_ocl_roundDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test524___spirv_ocl_round(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_round(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z17__spirv_ocl_roundDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test525___spirv_ocl_round(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_round(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z17__spirv_ocl_roundDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test526___spirv_ocl_round(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_round(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z17__spirv_ocl_roundDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test527___spirv_ocl_round(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_round(arg1);
}
// CHECK: call {{.*}} double @_Z17__spirv_ocl_roundd(double {{.*}})
__spv_fp64_t test528___spirv_ocl_round(__spv_fp64_t arg1) {
  return __spirv_ocl_round(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z17__spirv_ocl_roundDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test529___spirv_ocl_round(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_round(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z17__spirv_ocl_roundDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test530___spirv_ocl_round(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_round(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z17__spirv_ocl_roundDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test531___spirv_ocl_round(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_round(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z17__spirv_ocl_roundDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test532___spirv_ocl_round(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_round(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z17__spirv_ocl_roundDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test533___spirv_ocl_round(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_round(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z17__spirv_ocl_roundDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z17__spirv_ocl_roundDh(half {{.*}})
__spv_fp16_t test534___spirv_ocl_round(__spv_fp16_t arg1) {
  return __spirv_ocl_round(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z17__spirv_ocl_roundDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z17__spirv_ocl_roundDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test535___spirv_ocl_round(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_round(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z17__spirv_ocl_roundDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z17__spirv_ocl_roundDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test536___spirv_ocl_round(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_round(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z17__spirv_ocl_roundDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z17__spirv_ocl_roundDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test537___spirv_ocl_round(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_round(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z17__spirv_ocl_roundDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z17__spirv_ocl_roundDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test538___spirv_ocl_round(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_round(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z17__spirv_ocl_roundDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z17__spirv_ocl_roundDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test539___spirv_ocl_round(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_round(arg1);
}
// Test __spirv_ocl_rsqrt
// CHECK: call {{.*}} float @_Z17__spirv_ocl_rsqrtf(float {{.*}})
__spv_fp32_t test540___spirv_ocl_rsqrt(__spv_fp32_t arg1) {
  return __spirv_ocl_rsqrt(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z17__spirv_ocl_rsqrtDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test541___spirv_ocl_rsqrt(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_rsqrt(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z17__spirv_ocl_rsqrtDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test542___spirv_ocl_rsqrt(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_rsqrt(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z17__spirv_ocl_rsqrtDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test543___spirv_ocl_rsqrt(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_rsqrt(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z17__spirv_ocl_rsqrtDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test544___spirv_ocl_rsqrt(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_rsqrt(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z17__spirv_ocl_rsqrtDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test545___spirv_ocl_rsqrt(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_rsqrt(arg1);
}
// CHECK: call {{.*}} double @_Z17__spirv_ocl_rsqrtd(double {{.*}})
__spv_fp64_t test546___spirv_ocl_rsqrt(__spv_fp64_t arg1) {
  return __spirv_ocl_rsqrt(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z17__spirv_ocl_rsqrtDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test547___spirv_ocl_rsqrt(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_rsqrt(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z17__spirv_ocl_rsqrtDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test548___spirv_ocl_rsqrt(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_rsqrt(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z17__spirv_ocl_rsqrtDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test549___spirv_ocl_rsqrt(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_rsqrt(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z17__spirv_ocl_rsqrtDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test550___spirv_ocl_rsqrt(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_rsqrt(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z17__spirv_ocl_rsqrtDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test551___spirv_ocl_rsqrt(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_rsqrt(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z17__spirv_ocl_rsqrtDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z17__spirv_ocl_rsqrtDh(half {{.*}})
__spv_fp16_t test552___spirv_ocl_rsqrt(__spv_fp16_t arg1) {
  return __spirv_ocl_rsqrt(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z17__spirv_ocl_rsqrtDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z17__spirv_ocl_rsqrtDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test553___spirv_ocl_rsqrt(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_rsqrt(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z17__spirv_ocl_rsqrtDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z17__spirv_ocl_rsqrtDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test554___spirv_ocl_rsqrt(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_rsqrt(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z17__spirv_ocl_rsqrtDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z17__spirv_ocl_rsqrtDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test555___spirv_ocl_rsqrt(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_rsqrt(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z17__spirv_ocl_rsqrtDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z17__spirv_ocl_rsqrtDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test556___spirv_ocl_rsqrt(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_rsqrt(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z17__spirv_ocl_rsqrtDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z17__spirv_ocl_rsqrtDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test557___spirv_ocl_rsqrt(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_rsqrt(arg1);
}
// Test __spirv_ocl_sin
// CHECK: call {{.*}} float @_Z15__spirv_ocl_sinf(float {{.*}})
__spv_fp32_t test558___spirv_ocl_sin(__spv_fp32_t arg1) {
  return __spirv_ocl_sin(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z15__spirv_ocl_sinDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test559___spirv_ocl_sin(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_sin(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z15__spirv_ocl_sinDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test560___spirv_ocl_sin(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_sin(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z15__spirv_ocl_sinDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test561___spirv_ocl_sin(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_sin(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z15__spirv_ocl_sinDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test562___spirv_ocl_sin(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_sin(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z15__spirv_ocl_sinDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test563___spirv_ocl_sin(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_sin(arg1);
}
// CHECK: call {{.*}} double @_Z15__spirv_ocl_sind(double {{.*}})
__spv_fp64_t test564___spirv_ocl_sin(__spv_fp64_t arg1) {
  return __spirv_ocl_sin(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z15__spirv_ocl_sinDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test565___spirv_ocl_sin(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_sin(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z15__spirv_ocl_sinDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test566___spirv_ocl_sin(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_sin(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z15__spirv_ocl_sinDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test567___spirv_ocl_sin(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_sin(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z15__spirv_ocl_sinDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test568___spirv_ocl_sin(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_sin(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z15__spirv_ocl_sinDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test569___spirv_ocl_sin(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_sin(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z15__spirv_ocl_sinDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z15__spirv_ocl_sinDh(half {{.*}})
__spv_fp16_t test570___spirv_ocl_sin(__spv_fp16_t arg1) {
  return __spirv_ocl_sin(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z15__spirv_ocl_sinDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z15__spirv_ocl_sinDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test571___spirv_ocl_sin(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_sin(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z15__spirv_ocl_sinDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z15__spirv_ocl_sinDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test572___spirv_ocl_sin(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_sin(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z15__spirv_ocl_sinDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z15__spirv_ocl_sinDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test573___spirv_ocl_sin(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_sin(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z15__spirv_ocl_sinDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z15__spirv_ocl_sinDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test574___spirv_ocl_sin(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_sin(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z15__spirv_ocl_sinDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z15__spirv_ocl_sinDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test575___spirv_ocl_sin(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_sin(arg1);
}
// Test __spirv_ocl_sinh
// CHECK: call {{.*}} float @_Z16__spirv_ocl_sinhf(float {{.*}})
__spv_fp32_t test576___spirv_ocl_sinh(__spv_fp32_t arg1) {
  return __spirv_ocl_sinh(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z16__spirv_ocl_sinhDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test577___spirv_ocl_sinh(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_sinh(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z16__spirv_ocl_sinhDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test578___spirv_ocl_sinh(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_sinh(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z16__spirv_ocl_sinhDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test579___spirv_ocl_sinh(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_sinh(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z16__spirv_ocl_sinhDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test580___spirv_ocl_sinh(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_sinh(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z16__spirv_ocl_sinhDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test581___spirv_ocl_sinh(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_sinh(arg1);
}
// CHECK: call {{.*}} double @_Z16__spirv_ocl_sinhd(double {{.*}})
__spv_fp64_t test582___spirv_ocl_sinh(__spv_fp64_t arg1) {
  return __spirv_ocl_sinh(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z16__spirv_ocl_sinhDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test583___spirv_ocl_sinh(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_sinh(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z16__spirv_ocl_sinhDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test584___spirv_ocl_sinh(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_sinh(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z16__spirv_ocl_sinhDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test585___spirv_ocl_sinh(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_sinh(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z16__spirv_ocl_sinhDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test586___spirv_ocl_sinh(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_sinh(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z16__spirv_ocl_sinhDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test587___spirv_ocl_sinh(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_sinh(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z16__spirv_ocl_sinhDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z16__spirv_ocl_sinhDh(half {{.*}})
__spv_fp16_t test588___spirv_ocl_sinh(__spv_fp16_t arg1) {
  return __spirv_ocl_sinh(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z16__spirv_ocl_sinhDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z16__spirv_ocl_sinhDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test589___spirv_ocl_sinh(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_sinh(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z16__spirv_ocl_sinhDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z16__spirv_ocl_sinhDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test590___spirv_ocl_sinh(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_sinh(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z16__spirv_ocl_sinhDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z16__spirv_ocl_sinhDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test591___spirv_ocl_sinh(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_sinh(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z16__spirv_ocl_sinhDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z16__spirv_ocl_sinhDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test592___spirv_ocl_sinh(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_sinh(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z16__spirv_ocl_sinhDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z16__spirv_ocl_sinhDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test593___spirv_ocl_sinh(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_sinh(arg1);
}
// Test __spirv_ocl_sinpi
// CHECK: call {{.*}} float @_Z17__spirv_ocl_sinpif(float {{.*}})
__spv_fp32_t test594___spirv_ocl_sinpi(__spv_fp32_t arg1) {
  return __spirv_ocl_sinpi(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z17__spirv_ocl_sinpiDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test595___spirv_ocl_sinpi(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_sinpi(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z17__spirv_ocl_sinpiDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test596___spirv_ocl_sinpi(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_sinpi(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z17__spirv_ocl_sinpiDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test597___spirv_ocl_sinpi(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_sinpi(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z17__spirv_ocl_sinpiDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test598___spirv_ocl_sinpi(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_sinpi(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z17__spirv_ocl_sinpiDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test599___spirv_ocl_sinpi(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_sinpi(arg1);
}
// CHECK: call {{.*}} double @_Z17__spirv_ocl_sinpid(double {{.*}})
__spv_fp64_t test600___spirv_ocl_sinpi(__spv_fp64_t arg1) {
  return __spirv_ocl_sinpi(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z17__spirv_ocl_sinpiDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test601___spirv_ocl_sinpi(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_sinpi(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z17__spirv_ocl_sinpiDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test602___spirv_ocl_sinpi(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_sinpi(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z17__spirv_ocl_sinpiDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test603___spirv_ocl_sinpi(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_sinpi(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z17__spirv_ocl_sinpiDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test604___spirv_ocl_sinpi(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_sinpi(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z17__spirv_ocl_sinpiDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test605___spirv_ocl_sinpi(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_sinpi(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z17__spirv_ocl_sinpiDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z17__spirv_ocl_sinpiDh(half {{.*}})
__spv_fp16_t test606___spirv_ocl_sinpi(__spv_fp16_t arg1) {
  return __spirv_ocl_sinpi(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z17__spirv_ocl_sinpiDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z17__spirv_ocl_sinpiDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test607___spirv_ocl_sinpi(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_sinpi(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z17__spirv_ocl_sinpiDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z17__spirv_ocl_sinpiDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test608___spirv_ocl_sinpi(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_sinpi(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z17__spirv_ocl_sinpiDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z17__spirv_ocl_sinpiDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test609___spirv_ocl_sinpi(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_sinpi(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z17__spirv_ocl_sinpiDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z17__spirv_ocl_sinpiDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test610___spirv_ocl_sinpi(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_sinpi(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z17__spirv_ocl_sinpiDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z17__spirv_ocl_sinpiDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test611___spirv_ocl_sinpi(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_sinpi(arg1);
}
// Test __spirv_ocl_sqrt
// CHECK: call {{.*}} float @_Z16__spirv_ocl_sqrtf(float {{.*}})
__spv_fp32_t test612___spirv_ocl_sqrt(__spv_fp32_t arg1) {
  return __spirv_ocl_sqrt(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z16__spirv_ocl_sqrtDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test613___spirv_ocl_sqrt(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_sqrt(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z16__spirv_ocl_sqrtDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test614___spirv_ocl_sqrt(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_sqrt(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z16__spirv_ocl_sqrtDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test615___spirv_ocl_sqrt(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_sqrt(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z16__spirv_ocl_sqrtDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test616___spirv_ocl_sqrt(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_sqrt(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z16__spirv_ocl_sqrtDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test617___spirv_ocl_sqrt(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_sqrt(arg1);
}
// CHECK: call {{.*}} double @_Z16__spirv_ocl_sqrtd(double {{.*}})
__spv_fp64_t test618___spirv_ocl_sqrt(__spv_fp64_t arg1) {
  return __spirv_ocl_sqrt(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z16__spirv_ocl_sqrtDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test619___spirv_ocl_sqrt(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_sqrt(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z16__spirv_ocl_sqrtDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test620___spirv_ocl_sqrt(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_sqrt(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z16__spirv_ocl_sqrtDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test621___spirv_ocl_sqrt(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_sqrt(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z16__spirv_ocl_sqrtDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test622___spirv_ocl_sqrt(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_sqrt(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z16__spirv_ocl_sqrtDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test623___spirv_ocl_sqrt(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_sqrt(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z16__spirv_ocl_sqrtDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z16__spirv_ocl_sqrtDh(half {{.*}})
__spv_fp16_t test624___spirv_ocl_sqrt(__spv_fp16_t arg1) {
  return __spirv_ocl_sqrt(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z16__spirv_ocl_sqrtDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z16__spirv_ocl_sqrtDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test625___spirv_ocl_sqrt(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_sqrt(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z16__spirv_ocl_sqrtDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z16__spirv_ocl_sqrtDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test626___spirv_ocl_sqrt(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_sqrt(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z16__spirv_ocl_sqrtDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z16__spirv_ocl_sqrtDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test627___spirv_ocl_sqrt(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_sqrt(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z16__spirv_ocl_sqrtDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z16__spirv_ocl_sqrtDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test628___spirv_ocl_sqrt(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_sqrt(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z16__spirv_ocl_sqrtDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z16__spirv_ocl_sqrtDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test629___spirv_ocl_sqrt(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_sqrt(arg1);
}
// Test __spirv_ocl_tan
// CHECK: call {{.*}} float @_Z15__spirv_ocl_tanf(float {{.*}})
__spv_fp32_t test630___spirv_ocl_tan(__spv_fp32_t arg1) {
  return __spirv_ocl_tan(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z15__spirv_ocl_tanDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test631___spirv_ocl_tan(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_tan(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z15__spirv_ocl_tanDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test632___spirv_ocl_tan(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_tan(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z15__spirv_ocl_tanDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test633___spirv_ocl_tan(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_tan(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z15__spirv_ocl_tanDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test634___spirv_ocl_tan(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_tan(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z15__spirv_ocl_tanDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test635___spirv_ocl_tan(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_tan(arg1);
}
// CHECK: call {{.*}} double @_Z15__spirv_ocl_tand(double {{.*}})
__spv_fp64_t test636___spirv_ocl_tan(__spv_fp64_t arg1) {
  return __spirv_ocl_tan(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z15__spirv_ocl_tanDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test637___spirv_ocl_tan(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_tan(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z15__spirv_ocl_tanDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test638___spirv_ocl_tan(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_tan(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z15__spirv_ocl_tanDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test639___spirv_ocl_tan(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_tan(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z15__spirv_ocl_tanDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test640___spirv_ocl_tan(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_tan(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z15__spirv_ocl_tanDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test641___spirv_ocl_tan(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_tan(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z15__spirv_ocl_tanDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z15__spirv_ocl_tanDh(half {{.*}})
__spv_fp16_t test642___spirv_ocl_tan(__spv_fp16_t arg1) {
  return __spirv_ocl_tan(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z15__spirv_ocl_tanDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z15__spirv_ocl_tanDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test643___spirv_ocl_tan(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_tan(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z15__spirv_ocl_tanDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z15__spirv_ocl_tanDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test644___spirv_ocl_tan(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_tan(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z15__spirv_ocl_tanDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z15__spirv_ocl_tanDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test645___spirv_ocl_tan(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_tan(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z15__spirv_ocl_tanDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z15__spirv_ocl_tanDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test646___spirv_ocl_tan(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_tan(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z15__spirv_ocl_tanDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z15__spirv_ocl_tanDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test647___spirv_ocl_tan(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_tan(arg1);
}
// Test __spirv_ocl_tanh
// CHECK: call {{.*}} float @_Z16__spirv_ocl_tanhf(float {{.*}})
__spv_fp32_t test648___spirv_ocl_tanh(__spv_fp32_t arg1) {
  return __spirv_ocl_tanh(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z16__spirv_ocl_tanhDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test649___spirv_ocl_tanh(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_tanh(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z16__spirv_ocl_tanhDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test650___spirv_ocl_tanh(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_tanh(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z16__spirv_ocl_tanhDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test651___spirv_ocl_tanh(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_tanh(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z16__spirv_ocl_tanhDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test652___spirv_ocl_tanh(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_tanh(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z16__spirv_ocl_tanhDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test653___spirv_ocl_tanh(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_tanh(arg1);
}
// CHECK: call {{.*}} double @_Z16__spirv_ocl_tanhd(double {{.*}})
__spv_fp64_t test654___spirv_ocl_tanh(__spv_fp64_t arg1) {
  return __spirv_ocl_tanh(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z16__spirv_ocl_tanhDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test655___spirv_ocl_tanh(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_tanh(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z16__spirv_ocl_tanhDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test656___spirv_ocl_tanh(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_tanh(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z16__spirv_ocl_tanhDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test657___spirv_ocl_tanh(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_tanh(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z16__spirv_ocl_tanhDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test658___spirv_ocl_tanh(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_tanh(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z16__spirv_ocl_tanhDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test659___spirv_ocl_tanh(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_tanh(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z16__spirv_ocl_tanhDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z16__spirv_ocl_tanhDh(half {{.*}})
__spv_fp16_t test660___spirv_ocl_tanh(__spv_fp16_t arg1) {
  return __spirv_ocl_tanh(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z16__spirv_ocl_tanhDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z16__spirv_ocl_tanhDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test661___spirv_ocl_tanh(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_tanh(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z16__spirv_ocl_tanhDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z16__spirv_ocl_tanhDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test662___spirv_ocl_tanh(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_tanh(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z16__spirv_ocl_tanhDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z16__spirv_ocl_tanhDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test663___spirv_ocl_tanh(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_tanh(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z16__spirv_ocl_tanhDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z16__spirv_ocl_tanhDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test664___spirv_ocl_tanh(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_tanh(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z16__spirv_ocl_tanhDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z16__spirv_ocl_tanhDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test665___spirv_ocl_tanh(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_tanh(arg1);
}
// Test __spirv_ocl_tanpi
// CHECK: call {{.*}} float @_Z17__spirv_ocl_tanpif(float {{.*}})
__spv_fp32_t test666___spirv_ocl_tanpi(__spv_fp32_t arg1) {
  return __spirv_ocl_tanpi(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z17__spirv_ocl_tanpiDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test667___spirv_ocl_tanpi(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_tanpi(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z17__spirv_ocl_tanpiDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test668___spirv_ocl_tanpi(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_tanpi(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z17__spirv_ocl_tanpiDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test669___spirv_ocl_tanpi(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_tanpi(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z17__spirv_ocl_tanpiDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test670___spirv_ocl_tanpi(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_tanpi(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z17__spirv_ocl_tanpiDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test671___spirv_ocl_tanpi(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_tanpi(arg1);
}
// CHECK: call {{.*}} double @_Z17__spirv_ocl_tanpid(double {{.*}})
__spv_fp64_t test672___spirv_ocl_tanpi(__spv_fp64_t arg1) {
  return __spirv_ocl_tanpi(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z17__spirv_ocl_tanpiDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test673___spirv_ocl_tanpi(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_tanpi(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z17__spirv_ocl_tanpiDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test674___spirv_ocl_tanpi(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_tanpi(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z17__spirv_ocl_tanpiDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test675___spirv_ocl_tanpi(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_tanpi(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z17__spirv_ocl_tanpiDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test676___spirv_ocl_tanpi(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_tanpi(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z17__spirv_ocl_tanpiDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test677___spirv_ocl_tanpi(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_tanpi(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z17__spirv_ocl_tanpiDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z17__spirv_ocl_tanpiDh(half {{.*}})
__spv_fp16_t test678___spirv_ocl_tanpi(__spv_fp16_t arg1) {
  return __spirv_ocl_tanpi(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z17__spirv_ocl_tanpiDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z17__spirv_ocl_tanpiDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test679___spirv_ocl_tanpi(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_tanpi(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z17__spirv_ocl_tanpiDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z17__spirv_ocl_tanpiDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test680___spirv_ocl_tanpi(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_tanpi(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z17__spirv_ocl_tanpiDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z17__spirv_ocl_tanpiDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test681___spirv_ocl_tanpi(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_tanpi(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z17__spirv_ocl_tanpiDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z17__spirv_ocl_tanpiDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test682___spirv_ocl_tanpi(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_tanpi(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z17__spirv_ocl_tanpiDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z17__spirv_ocl_tanpiDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test683___spirv_ocl_tanpi(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_tanpi(arg1);
}
// Test __spirv_ocl_tgamma
// CHECK: call {{.*}} float @_Z18__spirv_ocl_tgammaf(float {{.*}})
__spv_fp32_t test684___spirv_ocl_tgamma(__spv_fp32_t arg1) {
  return __spirv_ocl_tgamma(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z18__spirv_ocl_tgammaDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test685___spirv_ocl_tgamma(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_tgamma(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z18__spirv_ocl_tgammaDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test686___spirv_ocl_tgamma(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_tgamma(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z18__spirv_ocl_tgammaDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test687___spirv_ocl_tgamma(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_tgamma(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z18__spirv_ocl_tgammaDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test688___spirv_ocl_tgamma(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_tgamma(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z18__spirv_ocl_tgammaDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test689___spirv_ocl_tgamma(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_tgamma(arg1);
}
// CHECK: call {{.*}} double @_Z18__spirv_ocl_tgammad(double {{.*}})
__spv_fp64_t test690___spirv_ocl_tgamma(__spv_fp64_t arg1) {
  return __spirv_ocl_tgamma(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z18__spirv_ocl_tgammaDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test691___spirv_ocl_tgamma(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_tgamma(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z18__spirv_ocl_tgammaDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test692___spirv_ocl_tgamma(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_tgamma(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z18__spirv_ocl_tgammaDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test693___spirv_ocl_tgamma(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_tgamma(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z18__spirv_ocl_tgammaDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test694___spirv_ocl_tgamma(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_tgamma(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z18__spirv_ocl_tgammaDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test695___spirv_ocl_tgamma(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_tgamma(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z18__spirv_ocl_tgammaDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z18__spirv_ocl_tgammaDh(half {{.*}})
__spv_fp16_t test696___spirv_ocl_tgamma(__spv_fp16_t arg1) {
  return __spirv_ocl_tgamma(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z18__spirv_ocl_tgammaDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z18__spirv_ocl_tgammaDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test697___spirv_ocl_tgamma(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_tgamma(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z18__spirv_ocl_tgammaDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z18__spirv_ocl_tgammaDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test698___spirv_ocl_tgamma(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_tgamma(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z18__spirv_ocl_tgammaDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z18__spirv_ocl_tgammaDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test699___spirv_ocl_tgamma(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_tgamma(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z18__spirv_ocl_tgammaDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z18__spirv_ocl_tgammaDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test700___spirv_ocl_tgamma(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_tgamma(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z18__spirv_ocl_tgammaDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z18__spirv_ocl_tgammaDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test701___spirv_ocl_tgamma(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_tgamma(arg1);
}
// Test __spirv_ocl_trunc
// CHECK: call {{.*}} float @_Z17__spirv_ocl_truncf(float {{.*}})
__spv_fp32_t test702___spirv_ocl_trunc(__spv_fp32_t arg1) {
  return __spirv_ocl_trunc(arg1);
}
// CHECK: call {{.*}} <2 x float> @_Z17__spirv_ocl_truncDv2_f(<2 x float> {{.*}})
__spv_fp32_v2_t test703___spirv_ocl_trunc(__spv_fp32_v2_t arg1) {
  return __spirv_ocl_trunc(arg1);
}
// CHECK: call {{.*}} <3 x float> @_Z17__spirv_ocl_truncDv3_f(<3 x float> {{.*}})
__spv_fp32_v3_t test704___spirv_ocl_trunc(__spv_fp32_v3_t arg1) {
  return __spirv_ocl_trunc(arg1);
}
// CHECK: call {{.*}} <4 x float> @_Z17__spirv_ocl_truncDv4_f(<4 x float> {{.*}})
__spv_fp32_v4_t test705___spirv_ocl_trunc(__spv_fp32_v4_t arg1) {
  return __spirv_ocl_trunc(arg1);
}
// CHECK: call {{.*}} <8 x float> @_Z17__spirv_ocl_truncDv8_f(<8 x float> {{.*}})
__spv_fp32_v8_t test706___spirv_ocl_trunc(__spv_fp32_v8_t arg1) {
  return __spirv_ocl_trunc(arg1);
}
// CHECK: call {{.*}} <16 x float> @_Z17__spirv_ocl_truncDv16_f(<16 x float> {{.*}})
__spv_fp32_v16_t test707___spirv_ocl_trunc(__spv_fp32_v16_t arg1) {
  return __spirv_ocl_trunc(arg1);
}
// CHECK: call {{.*}} double @_Z17__spirv_ocl_truncd(double {{.*}})
__spv_fp64_t test708___spirv_ocl_trunc(__spv_fp64_t arg1) {
  return __spirv_ocl_trunc(arg1);
}
// CHECK: call {{.*}} <2 x double> @_Z17__spirv_ocl_truncDv2_d(<2 x double> {{.*}})
__spv_fp64_v2_t test709___spirv_ocl_trunc(__spv_fp64_v2_t arg1) {
  return __spirv_ocl_trunc(arg1);
}
// CHECK: call {{.*}} <3 x double> @_Z17__spirv_ocl_truncDv3_d(<3 x double> {{.*}})
__spv_fp64_v3_t test710___spirv_ocl_trunc(__spv_fp64_v3_t arg1) {
  return __spirv_ocl_trunc(arg1);
}
// CHECK: call {{.*}} <4 x double> @_Z17__spirv_ocl_truncDv4_d(<4 x double> {{.*}})
__spv_fp64_v4_t test711___spirv_ocl_trunc(__spv_fp64_v4_t arg1) {
  return __spirv_ocl_trunc(arg1);
}
// CHECK: call {{.*}} <8 x double> @_Z17__spirv_ocl_truncDv8_d(<8 x double> {{.*}})
__spv_fp64_v8_t test712___spirv_ocl_trunc(__spv_fp64_v8_t arg1) {
  return __spirv_ocl_trunc(arg1);
}
// CHECK: call {{.*}} <16 x double> @_Z17__spirv_ocl_truncDv16_d(<16 x double> {{.*}})
__spv_fp64_v16_t test713___spirv_ocl_trunc(__spv_fp64_v16_t arg1) {
  return __spirv_ocl_trunc(arg1);
}
// CHECK-Float16: call {{.*}} half @_Z17__spirv_ocl_truncDF16_(half {{.*}})
// CHECK-half: call {{.*}} half @_Z17__spirv_ocl_truncDh(half {{.*}})
__spv_fp16_t test714___spirv_ocl_trunc(__spv_fp16_t arg1) {
  return __spirv_ocl_trunc(arg1);
}
// CHECK-Float16: call {{.*}} <2 x half> @_Z17__spirv_ocl_truncDv2_DF16_(<2 x half> {{.*}})
// CHECK-half: call {{.*}} <2 x half> @_Z17__spirv_ocl_truncDv2_Dh(<2 x half> {{.*}})
__spv_fp16_v2_t test715___spirv_ocl_trunc(__spv_fp16_v2_t arg1) {
  return __spirv_ocl_trunc(arg1);
}
// CHECK-Float16: call {{.*}} <3 x half> @_Z17__spirv_ocl_truncDv3_DF16_(<3 x half> {{.*}})
// CHECK-half: call {{.*}} <3 x half> @_Z17__spirv_ocl_truncDv3_Dh(<3 x half> {{.*}})
__spv_fp16_v3_t test716___spirv_ocl_trunc(__spv_fp16_v3_t arg1) {
  return __spirv_ocl_trunc(arg1);
}
// CHECK-Float16: call {{.*}} <4 x half> @_Z17__spirv_ocl_truncDv4_DF16_(<4 x half> {{.*}})
// CHECK-half: call {{.*}} <4 x half> @_Z17__spirv_ocl_truncDv4_Dh(<4 x half> {{.*}})
__spv_fp16_v4_t test717___spirv_ocl_trunc(__spv_fp16_v4_t arg1) {
  return __spirv_ocl_trunc(arg1);
}
// CHECK-Float16: call {{.*}} <8 x half> @_Z17__spirv_ocl_truncDv8_DF16_(<8 x half> {{.*}})
// CHECK-half: call {{.*}} <8 x half> @_Z17__spirv_ocl_truncDv8_Dh(<8 x half> {{.*}})
__spv_fp16_v8_t test718___spirv_ocl_trunc(__spv_fp16_v8_t arg1) {
  return __spirv_ocl_trunc(arg1);
}
// CHECK-Float16: call {{.*}} <16 x half> @_Z17__spirv_ocl_truncDv16_DF16_(<16 x half> {{.*}})
// CHECK-half: call {{.*}} <16 x half> @_Z17__spirv_ocl_truncDv16_Dh(<16 x half> {{.*}})
__spv_fp16_v16_t test719___spirv_ocl_trunc(__spv_fp16_v16_t arg1) {
  return __spirv_ocl_trunc(arg1);
}
