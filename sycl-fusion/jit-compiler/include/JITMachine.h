//==- KernelFusion.h - Public interface of JIT compiler for kernel fusion --==//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef SYCL_FUSION_JIT_COMPILER_JITMACHINE_H
#define SYCL_FUSION_JIT_COMPILER_JITMACHINE_H


namespace jit_compiler {

/// Helper class to pass around LLVM target specific options
class JITMachine {
public:
  explicit JITMachine(const char *TargetCPU,
                                   const char *TargetFeatures) : TargetCPU{TargetCPU}, TargetFeatures{TargetFeatures} {}
  
private:
const char *TargetCPU;
                                   const char *TargetFeatures;
};

#endif // SYCL_FUSION_JIT_COMPILER_JITMACHINE_H
