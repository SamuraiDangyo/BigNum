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

constexpr char k_name[] = "BigNum 0.01";

// Functions

const std::string BigNumber(long number) {
  const bool sign = number < 0;
  if (number < 0) number = -number;
  std::string str = std::to_string(number), ret = "";
  const size_t len = str.length();
  for (size_t i = 0; i < len; i++) {
    if (i && ((len - i) % 3 == 0)) ret += ",";
    ret += str[i];
  }
  return (sign ? "-" : "") + ret;
}

void PrintHelp() {std::cout << k_name << "\nUsage: > bignum 4242" << std::endl;}
void Convert(const std::string val) {std::cout << BigNumber(std::stol(val.length() > 17 ? "0" : val)) << std::endl;}}
