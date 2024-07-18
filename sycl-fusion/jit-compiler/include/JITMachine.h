//==- JITMachine.h - Helper class to carry target specific information -----==//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef SYCL_FUSION_JIT_COMPILER_JITMACHINE_H
#define SYCL_FUSION_JIT_COMPILER_JITMACHINE_H

#include "Kernel.h"

#include "llvm/ADT/StringRef.h"
#include "llvm/Support/Error.h"

namespace llvm {
  class Module;
  class Target;
  class TargetMachine;
}

namespace jit_compiler {

/// Helper class to pass around LLVM target specific options
class JITMachine {
public:
  explicit JITMachine(const llvm::Module& Mod, BinaryFormat Format, llvm::StringRef TargetCPU,
                      llvm::StringRef TargetFeatures, llvm::StringRef FunctionName = {});

  llvm::StringRef getTarget() const { return TargetTriple; }
  llvm::StringRef getCPU()  const { return TargetCPU; }
  llvm::StringRef getFeatures() const { return TargetFeatures; }

  llvm::Expected<const llvm::Target *> getOrCreateTarget();
  llvm::Expected<llvm::TargetMachine *> getOrCreateTargetMachine();
  const llvm::Target & getTarget() { assert(Target && "Target not created"); return *Target;}
  llvm::TargetMachine & getTargetMachine() { assert(TargetMachine && "TargetMachine not created"); return *TargetMachine;}

private:

  void initSPIRV(const llvm::Module &Mod, llvm::StringRef FunctionName);
  void initNVPTX(const llvm::Module &Mod, llvm::StringRef FunctionName);
  void initAMDGPU(const llvm::Module &Mod, llvm::StringRef FunctionName);

  BinaryFormat Format;
  llvm::StringRef TargetTriple;
  llvm::StringRef TargetCPU;
  llvm::StringRef TargetFeatures;

  const llvm::Target *Target = nullptr;
  llvm::TargetMachine *TargetMachine = nullptr;
};

} // namespace jit_compiler

#endif // SYCL_FUSION_JIT_COMPILER_JITMACHINE_H
