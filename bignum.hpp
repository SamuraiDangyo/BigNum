/*
BigNum (561735852 -> 561,735,852)
Copyright (C) 2020 Toni Helminen

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

// Header guard

#pragma once

// Headers

#include <iostream>

// Namespace

namespace bignum {

// Constexprs

constexpr char kName[] = "BigNum 1.0";

// Functions

const std::string Convert2(const std::string str) {
  std::string ret = "";
  const std::size_t len = str.length();
  for (std::size_t i = 0; i < len; i++) {
    if (i && ((len - i) % 3 == 0 && str[i - 1] != '-')) ret += ",";
    ret += str[i];
  }
  return ret;
}

bool IsNumeric(const std::string str) {if (str == "-") return 0; for (std::size_t i = (str.length() && str[0] == '-') ? 1 : 0; i < str.length(); i++) {if (!std::isdigit(str[i])) return 0;} return 1;}
const std::string Convert(const std::string str) {return IsNumeric(str) ? Convert2(str) : "?";}}
