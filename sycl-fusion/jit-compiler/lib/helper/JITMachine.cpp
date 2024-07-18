//==- JITMachine.cpp - Helper class to carry target specific information ---==//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "JITMachine.h"
#include "Kernel.h"
#include "ErrorHandling.h"

#include "llvm/ADT/StringRef.h"
#include "llvm/IR/Module.h"
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Support/MemoryBuffer.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Target/TargetMachine.h"
#include "llvm/Target/TargetOptions.h"

namespace {
  static const char *TARGET_CPU_ATTRIBUTE = "target-cpu";
  static const char *TARGET_FEATURE_ATTRIBUTE = "target-features";

}

jit_compiler::JITMachine::JITMachine(const llvm::Module &Mod,
                                     BinaryFormat Format,
                                     llvm::StringRef TargetCPU,
                                     llvm::StringRef TargetFeatures, llvm::StringRef FunctionName)
    : Format{Format}, TargetCPU{TargetCPU}, TargetFeatures{TargetFeatures} {
  switch (Format) {
  case BinaryFormat::SPIRV: {
    initSPIRV(Mod, FunctionName);
    break;
  }
  case BinaryFormat::PTX: {
    initNVPTX(Mod, FunctionName);
    break;
  }
  case BinaryFormat::AMDGCN: {
    initAMDGPU(Mod, FunctionName);
    break;
  }
  default: {
    llvm_unreachable("Unhandled format");
  }
  }
}

#include <iostream>

llvm::Expected<const llvm::Target *> jit_compiler::JITMachine::getOrCreateTarget() {
  if (Target)
    return Target;
std::cerr << " >>>>>>> TargetTriple " << TargetTriple.str() << "\n";
  std::string ErrorMessage;
  const llvm::Target *Tgt =
      llvm::TargetRegistry::lookupTarget(TargetTriple, ErrorMessage);

  if (!Tgt) {
    return llvm::createStringError(
        llvm::inconvertibleErrorCode(),
        "Failed to create Target with error %s",
        ErrorMessage.c_str());
  }
  return Target = Tgt;
}

llvm::Expected<llvm::TargetMachine *> jit_compiler::JITMachine::getOrCreateTargetMachine() {
  if (TargetMachine)
    return TargetMachine;

  PROPAGATE_ERROR(Tgt, getOrCreateTarget());
  // FIXME: Check whether we can provide more accurate target information here
  TargetMachine = Tgt->createTargetMachine(TargetTriple, TargetCPU, TargetFeatures, {},
                                              llvm::Reloc::PIC_, std::nullopt,
                                              llvm::CodeGenOptLevel::Default);
  return TargetMachine;
}

void jit_compiler::JITMachine::initSPIRV(const llvm::Module &Mod, llvm::StringRef FunctionName) {
    TargetTriple = Mod.getTargetTriple();    
}
void jit_compiler::JITMachine::initNVPTX(const llvm::Module &Mod, llvm::StringRef FunctionName) {
    TargetTriple = "nvptx64-nvidia-cuda";
#ifdef FUSION_JIT_SUPPORT_PTX
  LLVMInitializeNVPTXTargetInfo();
  LLVMInitializeNVPTXTarget();
  LLVMInitializeNVPTXAsmPrinter();
  LLVMInitializeNVPTXTargetMC();
#endif // FUSION_JIT_SUPPORT_PTX

  // Give priority to user specified values.
  auto *KernelFunc = FunctionName.empty() ? nullptr : Mod.getFunction(FunctionName);
  // If they were not set, use default and consult the module for alternatives
  // (if present).
  if (TargetCPU.empty()) {
    TargetCPU = "sm_50";
    if (KernelFunc && KernelFunc->hasFnAttribute(TARGET_CPU_ATTRIBUTE)) {
      TargetCPU = KernelFunc->getFnAttribute(TARGET_CPU_ATTRIBUTE).getValueAsString();
    }
  }
  if (TargetFeatures.empty()) {
    TargetFeatures = "+sm_50,+ptx76";
    if (KernelFunc && KernelFunc->hasFnAttribute(TARGET_FEATURE_ATTRIBUTE)) {
      TargetFeatures = KernelFunc->getFnAttribute(TARGET_FEATURE_ATTRIBUTE)
                     .getValueAsString();
    }
  }

}
void jit_compiler::JITMachine::initAMDGPU(const llvm::Module &Mod, llvm::StringRef FunctionName) {
  TargetTriple = "amdgcn-amd-amdhsa";
#ifdef FUSION_JIT_SUPPORT_AMDGCN
  LLVMInitializeAMDGPUTargetInfo();
  LLVMInitializeAMDGPUTarget();
  LLVMInitializeAMDGPUAsmPrinter();
  LLVMInitializeAMDGPUTargetMC();
#endif
  // Give priority to user specified values.
  auto *KernelFunc = FunctionName.empty() ? nullptr : Mod.getFunction(FunctionName);
  // If they were not set, use default and consult the module for alternatives
  // (if present).
  if (TargetCPU.empty()) {
    TargetCPU = "gfx906";
    if (KernelFunc && KernelFunc->hasFnAttribute(TARGET_CPU_ATTRIBUTE)) {
      TargetCPU = KernelFunc->getFnAttribute(TARGET_CPU_ATTRIBUTE).getValueAsString();
    }
  }
  llvm::errs() << "------ TargetCPU " << TargetCPU << "\n";
  if (TargetFeatures.empty()) {
    if (KernelFunc && KernelFunc->hasFnAttribute(TARGET_FEATURE_ATTRIBUTE)) {
      TargetFeatures = KernelFunc->getFnAttribute(TARGET_FEATURE_ATTRIBUTE)
                     .getValueAsString();
    }
  }
}
