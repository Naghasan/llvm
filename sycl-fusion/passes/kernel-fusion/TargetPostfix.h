//==--------------------- TargetPostfix.h ----------------------------------==//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef KERNEL_FUSION_PASS_TARGET_POSTFIX_H
#define KERNEL_FUSION_PASS_TARGET_POSTFIX_H


#include "llvm/ADT/StringRef.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/PassManager.h"
#include <map>
#include <set>

namespace llvm {
class Function;

class TargetPostfix : public PassInfoMixin<TargetPostfix> {
public:
  TargetPostfix(StringRef TargetCPU, StringRef TargetFeature)
      : TargetCPU(TargetCPU), TargetFeature(TargetFeature) {}

  PreservedAnalyses run(Function &F, FunctionAnalysisManager &);

private:
  StringRef TargetCPU;
  StringRef TargetFeature;
};

} // namespace llvm

#endif // KERNEL_FUSION_PASS_TARGET_POSTFIX_H
