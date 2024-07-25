//==-------------------- TargetPostfix.cpp ---------------------==//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "TargetPostfix.h"

#include "llvm/IR/Constant.h"
#include "llvm/IR/IRBuilder.h"
#include <llvm/ADT/StringRef.h>
#include <llvm/Support/CommandLine.h>
#include <llvm/Support/Debug.h>

#define DEBUG_TYPE "sycl-target-postfix"

using namespace llvm;

PreservedAnalyses TargetPostfix::run(Function &F,
                                                 FunctionAnalysisManager &) {
  if (const char *DebugEnv = std::getenv("SYCL_JIT_COMPILER_DEBUG"))
    if (strstr(DebugEnv, DEBUG_TYPE)) {
      DebugFlag = true;
      llvm::setCurrentDebugType(DEBUG_TYPE);
    }
  

  LLVM_DEBUG(dbgs() << "Working on function:\n==================\n"
                    << (F.hasName() ? F.getName() : "unnamed kernel")
                    << "\n\n");

  if (!TargetCPU.empty()) {
    F.addFnAttr("target-cpu", TargetCPU);
    F.addFnAttr("tune-cpu", TargetCPU);
  }
  if (!TargetFeature.empty())
    F.addFnAttr("target-features", TargetFeature);

  return PreservedAnalyses::all();
}
