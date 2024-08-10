#pragma once

#include "tgbm/types/PassportElementError.h"

#include <string>
#include <memory>

namespace tgbm {

/**
 * @brief Represents an issue with the front side of a document.
 * The error is considered resolved when the file with the front side of the document changes.
 *
 * @ingroup types
 */
class PassportElementErrorFrontSide : public PassportElementError {
 public:
  static const std::string SOURCE;

  typedef std::shared_ptr<PassportElementErrorFrontSide> Ptr;

  PassportElementErrorFrontSide() {
    this->source = SOURCE;
  }

  /**
   * @brief Base64-encoded hash of the file with the front side of the document
   */
  std::string fileHash;
};
}  // namespace tgbm
