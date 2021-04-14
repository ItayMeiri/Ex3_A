//
// Created by ischelle on 05/04/2021.
//

#include "NumberWithUnits.hpp"
#include "Unit.hpp"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>

namespace ariel {
NumberWithUnits::NumberWithUnits(double value, std::string sign) {}

void NumberWithUnits::read_units(std::ifstream &units_file) {
  // std::string str;
  // while (std::getline(units_file, str)) {
  //     double value_left = 1; // the input will always have '1'

  //     //For each line, delete spaces
  //     std::string::iterator end_pos = std::remove(str.begin(), str.end(), '
  //     '); str.erase(end_pos, str.end());

  //     int eq_index = str.find_first_of('=');
  //     std::string sign_left = str.substr(1,
  //                                        eq_index); // will create a
  //                                        substring until equality sign, not
  //                                        inclusive
  //     std::string right_str = str.substr(eq_index + 1,
  //                                        str.size() - eq_index + 1); // will
  //                                        get the right part of the equation

  //     int num_index = right_str.find_first_not_of("0123456789."); // this
  //     index will be the end of the number double value_right =
  //     std::stod(right_str.substr(eq_index + 1, num_index)); // convert to
  //     double std::string sign_right = right_str.substr(num_index + 1,
  //     right_str.size() + 1); // inclusive of end Unit right_unit =
  //     Unit(value_right, sign_right); Unit left_unit = Unit(value_left,
  //     sign_left); if (value_left < value_right) {
  //         // the next one is a 'bigger' unit, meaning the smaller value is a
  //         bigger unit left_unit.setNext(right_unit);
  //         right_unit.setPrevious(left_unit);
  //     } else {
  //         right_unit.setNext(left_unit);
  //         left_unit.setPrevious(right_unit);
  //     }
  //     units.insert(std::make_pair(right_unit.getSign(), right_unit));
  //     units.insert(std::make_pair(left_unit.getSign(), left_unit));
  // }
}

// overload operators
std::ostream &operator<<(std::ostream &os, const NumberWithUnits &other) {
  return os << "h";
}
std::istream &operator>>(std::istringstream &is, const NumberWithUnits &num) {
  return is;
}

int operator+(const NumberWithUnits &o1, const NumberWithUnits &o2) {
  return 1;
}

int operator-(const NumberWithUnits &o1, const NumberWithUnits &o2) {
  return 1;
}
int operator-(const NumberWithUnits &o1) { return 1; }

bool operator<(const NumberWithUnits &o1, const NumberWithUnits &o2) {
  return true;
}

bool operator<=(const NumberWithUnits &o1, const NumberWithUnits &o2) {
  return true;
}

bool operator>(const NumberWithUnits &o1, const NumberWithUnits &o2) {
  return true;
}

bool operator>=(const NumberWithUnits &o1, const NumberWithUnits &o2) {
  return true;
}
int operator*(const int ot, const NumberWithUnits &other) { return 1; }

bool operator==(const NumberWithUnits &o1, const NumberWithUnits &o2) {
  return true;
}

int operator+=(const NumberWithUnits &o1, const NumberWithUnits &o2) {
  return 1;
}
int operator-=(const NumberWithUnits &o1, const NumberWithUnits &o2) {
  return 1;
}

} // namespace ariel