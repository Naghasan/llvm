/*===---- __clang_spirv_builtin_types.h ------------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

#ifndef __CLANG_SPIRV_BUILTINS_TYPES_H
#define __CLANG_SPIRV_BUILTINS_TYPES_H

#if __cplusplus >= 201103L
#define __SPIRV_NOEXCEPT noexcept
#else
#define __SPIRV_NOEXCEPT
#endif

typedef __SIZE_TYPE__ __spv_size_t;

typedef __UINT8_TYPE__ __spv_uint8_t;
typedef __INT8_TYPE__ __spv_int8_t;
typedef __spv_uint8_t __spv_uint8_v2_t  __attribute__((ext_vector_type(2)));
typedef __spv_int8_t __spv_int8_v2_t  __attribute__((ext_vector_type(2)));
typedef __spv_uint8_t __spv_uint8_v3_t  __attribute__((ext_vector_type(3)));
typedef __spv_int8_t __spv_int8_v3_t  __attribute__((ext_vector_type(3)));
typedef __spv_uint8_t __spv_uint8_v4_t  __attribute__((ext_vector_type(4)));
typedef __spv_int8_t __spv_int8_v4_t  __attribute__((ext_vector_type(4)));
typedef __spv_uint8_t __spv_uint8_v8_t  __attribute__((ext_vector_type(8)));
typedef __spv_int8_t __spv_int8_v8_t  __attribute__((ext_vector_type(8)));
typedef __spv_uint8_t __spv_uint8_v16_t  __attribute__((ext_vector_type(16)));
typedef __spv_int8_t __spv_int8_v16_t  __attribute__((ext_vector_type(16)));

typedef __UINT16_TYPE__ __spv_uint16_t;
typedef __INT16_TYPE__ __spv_int16_t;
typedef __spv_uint16_t __spv_uint16_v2_t  __attribute__((ext_vector_type(2)));
typedef __spv_int16_t __spv_int16_v2_t  __attribute__((ext_vector_type(2)));
typedef __spv_uint16_t __spv_uint16_v3_t  __attribute__((ext_vector_type(3)));
typedef __spv_int16_t __spv_int16_v3_t  __attribute__((ext_vector_type(3)));
typedef __spv_uint16_t __spv_uint16_v4_t  __attribute__((ext_vector_type(4)));
typedef __spv_int16_t __spv_int16_v4_t  __attribute__((ext_vector_type(4)));
typedef __spv_uint16_t __spv_uint16_v8_t  __attribute__((ext_vector_type(8)));
typedef __spv_int16_t __spv_int16_v8_t  __attribute__((ext_vector_type(8)));
typedef __spv_uint16_t __spv_uint16_v16_t  __attribute__((ext_vector_type(16)));
typedef __spv_int16_t __spv_int16_v16_t  __attribute__((ext_vector_type(16)));

typedef __UINT32_TYPE__ __spv_uint32_t;
typedef __INT32_TYPE__ __spv_int32_t;
typedef __spv_uint32_t __spv_uint32_v2_t  __attribute__((ext_vector_type(2)));
typedef __spv_int32_t __spv_int32_v2_t  __attribute__((ext_vector_type(2)));
typedef __spv_uint32_t __spv_uint32_v3_t  __attribute__((ext_vector_type(3)));
typedef __spv_int32_t __spv_int32_v3_t  __attribute__((ext_vector_type(3)));
typedef __spv_uint32_t __spv_uint32_v4_t  __attribute__((ext_vector_type(4)));
typedef __spv_int32_t __spv_int32_v4_t  __attribute__((ext_vector_type(4)));
typedef __spv_uint32_t __spv_uint32_v8_t  __attribute__((ext_vector_type(8)));
typedef __spv_int32_t __spv_int32_v8_t  __attribute__((ext_vector_type(8)));
typedef __spv_uint32_t __spv_uint32_v16_t  __attribute__((ext_vector_type(16)));
typedef __spv_int32_t __spv_int32_v16_t  __attribute__((ext_vector_type(16)));

typedef __UINT64_TYPE__ __spv_uint64_t;
typedef __INT64_TYPE__ __spv_int64_t;
typedef __spv_uint64_t __spv_uint64_v2_t  __attribute__((ext_vector_type(2)));
typedef __spv_int64_t __spv_int64_v2_t  __attribute__((ext_vector_type(2)));
typedef __spv_uint64_t __spv_uint64_v3_t  __attribute__((ext_vector_type(3)));
typedef __spv_int64_t __spv_int64_v3_t  __attribute__((ext_vector_type(3)));
typedef __spv_uint64_t __spv_uint64_v4_t  __attribute__((ext_vector_type(4)));
typedef __spv_int64_t __spv_int64_v4_t  __attribute__((ext_vector_type(4)));
typedef __spv_uint64_t __spv_uint64_v8_t  __attribute__((ext_vector_type(8)));
typedef __spv_int64_t __spv_int64_v8_t  __attribute__((ext_vector_type(8)));
typedef __spv_uint64_t __spv_uint64_v16_t  __attribute__((ext_vector_type(16)));
typedef __spv_int64_t __spv_int64_v16_t  __attribute__((ext_vector_type(16)));

#if defined(__OPENCL_C_VERSION__) || defined(__OPENCL_CPP_VERSION__)
typedef half __spv_fp16_t;
#else
typedef _Float16 __spv_fp16_t;
#endif
typedef __spv_fp16_t __spv_fp16_v2_t  __attribute__((ext_vector_type(2)));
typedef __spv_fp16_t __spv_fp16_v3_t  __attribute__((ext_vector_type(3)));
typedef __spv_fp16_t __spv_fp16_v4_t  __attribute__((ext_vector_type(4)));
typedef __spv_fp16_t __spv_fp16_v8_t  __attribute__((ext_vector_type(8)));
typedef __spv_fp16_t __spv_fp16_v16_t  __attribute__((ext_vector_type(16)));

typedef float __spv_fp32_t;
typedef __spv_fp32_t __spv_fp32_v2_t  __attribute__((ext_vector_type(2)));
typedef __spv_fp32_t __spv_fp32_v3_t  __attribute__((ext_vector_type(3)));
typedef __spv_fp32_t __spv_fp32_v4_t  __attribute__((ext_vector_type(4)));
typedef __spv_fp32_t __spv_fp32_v8_t  __attribute__((ext_vector_type(8)));
typedef __spv_fp32_t __spv_fp32_v16_t  __attribute__((ext_vector_type(16)));

typedef double __spv_fp64_t;
typedef __spv_fp64_t __spv_fp64_v2_t  __attribute__((ext_vector_type(2)));
typedef __spv_fp64_t __spv_fp64_v3_t  __attribute__((ext_vector_type(3)));
typedef __spv_fp64_t __spv_fp64_v4_t  __attribute__((ext_vector_type(4)));
typedef __spv_fp64_t __spv_fp64_v8_t  __attribute__((ext_vector_type(8)));
typedef __spv_fp64_t __spv_fp64_v16_t  __attribute__((ext_vector_type(16)));

#endif /* __CLANG_SPIRV_BUILTINS_TYPES_H */
