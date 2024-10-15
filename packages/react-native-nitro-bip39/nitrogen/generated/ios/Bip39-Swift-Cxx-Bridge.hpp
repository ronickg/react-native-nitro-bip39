///
/// Bip39-Swift-Cxx-Bridge.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

// Forward declarations of C++ defined types
// Forward declaration of `ArrayBufferHolder` to properly resolve imports.
namespace NitroModules { class ArrayBufferHolder; }
// Forward declaration of `ArrayBuffer` to properly resolve imports.
namespace NitroModules { class ArrayBuffer; }
// Forward declaration of `WordLists` to properly resolve imports.
namespace margelo::nitro::bip39 { enum class WordLists; }

// Include C++ defined types
#if __has_include("WordLists.hpp")
 #include "WordLists.hpp"
#endif
#if __has_include(<NitroModules/ArrayBuffer.hpp>)
 #include <NitroModules/ArrayBuffer.hpp>
#endif
#if __has_include(<NitroModules/ArrayBufferHolder.hpp>)
 #include <NitroModules/ArrayBufferHolder.hpp>
#endif
#if __has_include(<optional>)
 #include <optional>
#endif
#if __has_include(<string>)
 #include <string>
#endif

/**
 * Contains specialized versions of C++ templated types so they can be accessed from Swift,
 * as well as helper functions to interact with those C++ types from Swift.
 */
namespace margelo::nitro::bip39::bridge::swift {

  /**
   * Specialized version of `std::optional<double>`.
   */
  using std__optional_double_ = std::optional<double>;
  inline std::optional<double> create_std__optional_double_(const double& value) {
    return std::optional<double>(value);
  }
  
  /**
   * Specialized version of `std::optional<std::shared_ptr<ArrayBuffer>>`.
   */
  using std__optional_std__shared_ptr_ArrayBuffer__ = std::optional<std::shared_ptr<ArrayBuffer>>;
  inline std::optional<std::shared_ptr<ArrayBuffer>> create_std__optional_std__shared_ptr_ArrayBuffer__(const std::shared_ptr<ArrayBuffer>& value) {
    return std::optional<std::shared_ptr<ArrayBuffer>>(value);
  }
  
  /**
   * Specialized version of `std::optional<WordLists>`.
   */
  using std__optional_WordLists_ = std::optional<WordLists>;
  inline std::optional<WordLists> create_std__optional_WordLists_(const WordLists& value) {
    return std::optional<WordLists>(value);
  }
  
  /**
   * Specialized version of `std::optional<std::string>`.
   */
  using std__optional_std__string_ = std::optional<std::string>;
  inline std::optional<std::string> create_std__optional_std__string_(const std::string& value) {
    return std::optional<std::string>(value);
  }

} // namespace margelo::nitro::bip39::bridge::swift
