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

const std::string kName = "BigNum 1.1";

// Functions

bool IsNumeric(const std::string str) {
  if (str == "-") 
    return false; 
  
  for (std::size_t i = (str.length() && str[0] == '-') ? 1 : 0; i < str.length(); i++) {
    if (!std::isdigit(str[i])) 
      return false;
  }
  
  return true;
}

const std::string Convert(const std::string& str) {
  if (!IsNumeric(str)) 
    return "?";

  std::string ret = "";
  const auto len = str.length();

  for (std::size_t i = 0; i < len; i++) {
    if (i && ((len - i) % 3 == 0 && str[i - 1] != '-')) 
      ret += ",";
    ret += str[i];
  }

  return ret;
}}
