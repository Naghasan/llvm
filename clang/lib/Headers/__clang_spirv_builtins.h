/*===---- spirv_builtin_vars.h - SPIR-V built-in ---------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

#ifndef __SPIRV_BUILTIN_VARS_H
#define __SPIRV_BUILTIN_VARS_H

#if __cplusplus >= 201103L
#define __SPIRV_NOEXCEPT noexcept
#else
#define __SPIRV_NOEXCEPT
#endif

#ifdef cl_khr_fp16
#pragma OPENCL EXTENSION cl_khr_fp16 : enable
#endif

#include "__clang_spirv_builtins_types.h"

#define __SPIRV_overloadable __attribute__((overloadable))
#define __SPIRV_convergent __attribute__((convergent))
#define __SPIRV_inline __attribute__((always_inline))

#define __spv_global __attribute__((opencl_global))
#define __spv_local __attribute__((opencl_local))
#define __spv_private __attribute__((opencl_private))
#define __spv_constant __attribute__((opencl_constant))
#ifdef __SYCL_DEVICE_ONLY__
#define __spv_generic
#else
#define __spv_generic __attribute__((opencl_generic))
#endif

// Check if SPIR-V builtins are supported.
// As the translator doesn't use the LLVM intrinsics (which would be emitted if
// we use the SPIR-V builtins) we can't rely on the SPIRV32/SPIRV64 etc macros
// to establish if we can use the builtin alias. We disable builtin altogether
// if we do not intent to use the backend. So instead of use target macros, rely
// on a __has_builtin test.
#if (__has_builtin(__builtin_spirv_num_workgroups))
#define __SPIRV_BUILTIN_ALIAS(builtin)                                         \
  __attribute__((clang_builtin_alias(builtin)))
#else
#define __SPIRV_BUILTIN_ALIAS(builtin)
#endif

#include "__clang_spirv_builtins_math.h"

// Builtin IDs and sizes

extern __SPIRV_BUILTIN_ALIAS(__builtin_spirv_num_workgroups) __spv_size_t
    __spirv_BuiltInNumWorkgroups(int);
extern __SPIRV_BUILTIN_ALIAS(__builtin_spirv_workgroup_size) __spv_size_t
    __spirv_BuiltInWorkgroupSize(int);
extern __SPIRV_BUILTIN_ALIAS(__builtin_spirv_workgroup_id) __spv_size_t
    __spirv_BuiltInWorkgroupId(int);
extern __SPIRV_BUILTIN_ALIAS(__builtin_spirv_local_invocation_id) __spv_size_t
    __spirv_BuiltInLocalInvocationId(int);
extern __SPIRV_BUILTIN_ALIAS(__builtin_spirv_global_invocation_id) __spv_size_t
    __spirv_BuiltInGlobalInvocationId(int);

extern __SPIRV_BUILTIN_ALIAS(__builtin_spirv_global_size) __spv_size_t
    __spirv_BuiltInGlobalSize(int);
extern __SPIRV_BUILTIN_ALIAS(__builtin_spirv_global_offset) __spv_size_t
    __spirv_BuiltInGlobalOffset(int);
extern __SPIRV_BUILTIN_ALIAS(__builtin_spirv_subgroup_size) __spv_uint32_t
    __spirv_BuiltInSubgroupSize();
extern __SPIRV_BUILTIN_ALIAS(__builtin_spirv_subgroup_max_size) __spv_uint32_t
    __spirv_BuiltInSubgroupMaxSize();
extern __SPIRV_BUILTIN_ALIAS(__builtin_spirv_num_subgroups) __spv_uint32_t
    __spirv_BuiltInNumSubgroups();
extern __SPIRV_BUILTIN_ALIAS(__builtin_spirv_subgroup_id) __spv_uint32_t
    __spirv_BuiltInSubgroupId();
extern __SPIRV_BUILTIN_ALIAS(__builtin_spirv_subgroup_local_invocation_id)
    __spv_uint32_t __spirv_BuiltInSubgroupLocalInvocationId();

// OpGenericCastToPtrExplicit

extern __SPIRV_overloadable
__SPIRV_BUILTIN_ALIAS(__builtin_spirv_generic_cast_to_ptr_explicit)
__spv_global void *__spirv_GenericCastToPtrExplicit_ToGlobal(__spv_generic void *,
                                                         int) __SPIRV_NOEXCEPT;
extern __SPIRV_overloadable
__SPIRV_BUILTIN_ALIAS(__builtin_spirv_generic_cast_to_ptr_explicit)
__spv_global const void *
__spirv_GenericCastToPtrExplicit_ToGlobal(__spv_generic const void *,
                                          int) __SPIRV_NOEXCEPT;
extern __SPIRV_overloadable
__SPIRV_BUILTIN_ALIAS(__builtin_spirv_generic_cast_to_ptr_explicit)
__spv_global volatile void *
__spirv_GenericCastToPtrExplicit_ToGlobal(__spv_generic volatile void *,
                                          int) __SPIRV_NOEXCEPT;
extern __SPIRV_overloadable
__SPIRV_BUILTIN_ALIAS(__builtin_spirv_generic_cast_to_ptr_explicit)
__spv_global const volatile void *
__spirv_GenericCastToPtrExplicit_ToGlobal(__spv_generic const volatile void *,
                                          int) __SPIRV_NOEXCEPT;
extern __SPIRV_overloadable
__SPIRV_BUILTIN_ALIAS(__builtin_spirv_generic_cast_to_ptr_explicit)
__spv_local void *__spirv_GenericCastToPtrExplicit_ToLocal(__spv_generic void *,
                                                       int) __SPIRV_NOEXCEPT;
extern __SPIRV_overloadable
__SPIRV_BUILTIN_ALIAS(__builtin_spirv_generic_cast_to_ptr_explicit)
__spv_local const void *
__spirv_GenericCastToPtrExplicit_ToLocal(__spv_generic const void *,
                                         int) __SPIRV_NOEXCEPT;
extern __SPIRV_overloadable
__SPIRV_BUILTIN_ALIAS(__builtin_spirv_generic_cast_to_ptr_explicit)
__spv_local volatile void *
__spirv_GenericCastToPtrExplicit_ToLocal(__spv_generic volatile void *,
                                         int) __SPIRV_NOEXCEPT;
extern __SPIRV_overloadable
__SPIRV_BUILTIN_ALIAS(__builtin_spirv_generic_cast_to_ptr_explicit)
__spv_local const volatile void *
__spirv_GenericCastToPtrExplicit_ToLocal(__spv_generic const volatile void *,
                                         int) __SPIRV_NOEXCEPT;
extern __SPIRV_overloadable
__SPIRV_BUILTIN_ALIAS(__builtin_spirv_generic_cast_to_ptr_explicit)
__spv_private void *
__spirv_GenericCastToPtrExplicit_ToPrivate(__spv_generic void *,
                                           int) __SPIRV_NOEXCEPT;
extern __SPIRV_overloadable
__SPIRV_BUILTIN_ALIAS(__builtin_spirv_generic_cast_to_ptr_explicit)
__spv_private const void *
__spirv_GenericCastToPtrExplicit_ToPrivate(__spv_generic const void *,
                                           int) __SPIRV_NOEXCEPT;
extern __SPIRV_overloadable
__SPIRV_BUILTIN_ALIAS(__builtin_spirv_generic_cast_to_ptr_explicit)
__spv_private volatile void *
__spirv_GenericCastToPtrExplicit_ToPrivate(__spv_generic volatile void *,
                                           int) __SPIRV_NOEXCEPT;
extern __SPIRV_overloadable
__SPIRV_BUILTIN_ALIAS(__builtin_spirv_generic_cast_to_ptr_explicit)
__spv_private const volatile void *
__spirv_GenericCastToPtrExplicit_ToPrivate(__spv_generic const volatile void *,
                                           int) __SPIRV_NOEXCEPT;

// OpGenericCastToPtr

static __SPIRV_overloadable __SPIRV_inline __spv_global void *
__spirv_GenericCastToPtr_ToGlobal(__spv_generic void *p, int) __SPIRV_NOEXCEPT {
  return (__spv_global void *)p;
}
static __SPIRV_overloadable __SPIRV_inline __spv_global const void *
__spirv_GenericCastToPtr_ToGlobal(__spv_generic const void *p,
                                  int) __SPIRV_NOEXCEPT {
  return (__spv_global const void *)p;
}
static __SPIRV_overloadable __SPIRV_inline __spv_global volatile void *
__spirv_GenericCastToPtr_ToGlobal(__spv_generic volatile void *p,
                                  int) __SPIRV_NOEXCEPT {
  return (__spv_global volatile void *)p;
}
static __SPIRV_overloadable __SPIRV_inline __spv_global const volatile void *
__spirv_GenericCastToPtr_ToGlobal(__spv_generic const volatile void *p,
                                  int) __SPIRV_NOEXCEPT {
  return (__spv_global const volatile void *)p;
}
static __SPIRV_overloadable __SPIRV_inline __spv_local void *
__spirv_GenericCastToPtr_ToLocal(__spv_generic void *p, int) __SPIRV_NOEXCEPT {
  return (__spv_local void *)p;
}
static __SPIRV_overloadable __SPIRV_inline __spv_local const void *
__spirv_GenericCastToPtr_ToLocal(__spv_generic const void *p,
                                 int) __SPIRV_NOEXCEPT {
  return (__spv_local const void *)p;
}
static __SPIRV_overloadable __SPIRV_inline __spv_local volatile void *
__spirv_GenericCastToPtr_ToLocal(__spv_generic volatile void *p,
                                 int) __SPIRV_NOEXCEPT {
  return (__spv_local volatile void *)p;
}
static __SPIRV_overloadable __SPIRV_inline __spv_local const volatile void *
__spirv_GenericCastToPtr_ToLocal(__spv_generic const volatile void *p,
                                 int) __SPIRV_NOEXCEPT {
  return (__spv_local const volatile void *)p;
}
static __SPIRV_overloadable __SPIRV_inline __spv_private void *
__spirv_GenericCastToPtr_ToPrivate(__spv_generic void *p, int) __SPIRV_NOEXCEPT {
  return (__spv_private void *)p;
}
static __SPIRV_overloadable __SPIRV_inline __spv_private const void *
__spirv_GenericCastToPtr_ToPrivate(__spv_generic const void *p,
                                   int) __SPIRV_NOEXCEPT {
  return (__spv_private const void *)p;
}
static __SPIRV_overloadable __SPIRV_inline __spv_private volatile void *
__spirv_GenericCastToPtr_ToPrivate(__spv_generic volatile void *p,
                                   int) __SPIRV_NOEXCEPT {
  return (__spv_private volatile void *)p;
}
static __SPIRV_overloadable __SPIRV_inline __spv_private const volatile void *
__spirv_GenericCastToPtr_ToPrivate(__spv_generic const volatile void *p,
                                   int) __SPIRV_NOEXCEPT {
  return (__spv_private const volatile void *)p;
}

#undef __SPIRV_overloadable
#undef __SPIRV_convergent
#undef __SPIRV_inline

#undef __spv_global
#undef __spv_local
#undef __spv_constant
#undef __spv_generic

#undef __SPIRV_BUILTIN_ALIAS
#undef __SPIRV_NOEXCEPT

#endif /* __SPIRV_BUILTIN_VARS_H */
