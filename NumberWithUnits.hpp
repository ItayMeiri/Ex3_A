//
// Created by Itay on 03/04/2021.
//

#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <unordered_map>
#include "Unit.hpp"

namespace ariel {

    class NumberWithUnits {
    public:
        static std::unordered_map <std::string, Unit> units;

        NumberWithUnits(double value, std::string sign);

        static void read_units(std::ifstream &units_file);

        friend std::ostream& operator<< (std::ostream &out, const NumberWithUnits &num);
        friend std::istream& operator>>(std::istringstream &is, const NumberWithUnits &num);

        friend int operator+(const NumberWithUnits &o1, const NumberWithUnits &o2);
        friend int operator-(const NumberWithUnits &o1, const NumberWithUnits &o2);
        friend int operator-(const NumberWithUnits &o1);

        friend bool operator<(const NumberWithUnits &o1, const NumberWithUnits &o2);
        friend bool operator<=(const NumberWithUnits &o1, const NumberWithUnits &o2);
        friend bool operator>(const NumberWithUnits &o1, const NumberWithUnits &o2);
        friend bool operator>=(const NumberWithUnits &o1, const NumberWithUnits &o2);

        friend int operator*(const int ot, const NumberWithUnits &other);
        friend bool operator==(const NumberWithUnits &o1, const NumberWithUnits &o2);
        friend int operator+=(const NumberWithUnits &o1, const NumberWithUnits &o2);
        friend int operator-=(const NumberWithUnits &o1, const NumberWithUnits &o2);

        NumberWithUnits& operator++();
        NumberWithUnits operator++(int);
        NumberWithUnits& operator--();
        NumberWithUnits operator--(int);








    };

}

