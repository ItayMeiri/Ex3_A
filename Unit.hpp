//
// Created by ischelle on 05/04/2021.
//

#pragma once
class Unit;
#include <string>
namespace ariel{
class Unit {
private:
    double value;
    std::string sign;
    Unit *next;
    Unit *prev;


public:
    Unit(double value, std::string sign);
    void setPrevious(Unit prev);
    void setNext(Unit next);

    Unit getPrevious();
    Unit getNext();

    double convert_next(double amount);
    double convert_prev(double amount);

    std::string getSign();
    void setSign(std::string sign);

    int getValue();
    void setValue(int value);
};


}