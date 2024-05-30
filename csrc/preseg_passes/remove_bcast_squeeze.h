// clang-format off
/*
 * SPDX-FileCopyrightText: Copyright (c) 2023-present NVIDIA CORPORATION & AFFILIATES.
 * All rights reserved.
 * SPDX-License-Identifier: BSD-3-Clause
 */
// clang-format on
#include <preseg_passes/optimization_pass.h>

namespace nvfuser::preseg_passes {

// Remove broadcast + squeeze pattern
class RemoveBcastSqueeze : public OptimizationPass<RemoveBcastSqueeze> {
  friend class OptimizationPass<RemoveBcastSqueeze>;

 protected:
  static void runPass(Fusion* fusion);
};

} // namespace nvfuser::preseg_passes
