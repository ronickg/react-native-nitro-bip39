///
/// HybridBip39Spec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "HybridBip39Spec.hpp"

namespace margelo::nitro::bip39 {

  void HybridBip39Spec::loadHybridMethods() {
    // load base methods/properties
    HybridObject::loadHybridMethods();
    // load custom methods/properties
    registerHybrids(this, [](Prototype& prototype) {
      prototype.registerHybridMethod("getDefaultWordlist", &HybridBip39Spec::getDefaultWordlist);
      prototype.registerHybridMethod("setDefaultWordlist", &HybridBip39Spec::setDefaultWordlist);
      prototype.registerHybridMethod("generateMnemonic", &HybridBip39Spec::generateMnemonic);
      prototype.registerHybridMethod("validateMnemonic", &HybridBip39Spec::validateMnemonic);
      prototype.registerHybridMethod("mnemonicToSeed", &HybridBip39Spec::mnemonicToSeed);
      prototype.registerHybridMethod("mnemonicToSeedHex", &HybridBip39Spec::mnemonicToSeedHex);
      prototype.registerHybridMethod("mnemonicToEntropy", &HybridBip39Spec::mnemonicToEntropy);
      prototype.registerHybridMethod("entropyToMnemonic", &HybridBip39Spec::entropyToMnemonic);
    });
  }

} // namespace margelo::nitro::bip39
