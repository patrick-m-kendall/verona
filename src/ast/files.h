// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#pragma once

#include "err.h"

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

namespace files
{
  std::vector<char> slurp(const std::string& file, err::Errors& err);

  bool
  write(const std::string& file, const std::string& content, err::Errors& err);
}
