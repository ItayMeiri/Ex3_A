//
// Created by ischelle on 05/04/2021.
//

#include "Unit.hpp"
namespace ariel{
Unit::Unit(double value, std::string sign)
{
    this->value = value;
    this->sign = sign;

    void setPrevious(Unit prev){ this->prev = prev; }
    void setNext(Unit next) { this->next = next; }

    Unit getPrevious(){ return prev; }
    Unit getNext() { return next; }

    double convert_next(double amount){ amount / }
    double convert_prev(double amount);

    std::string getSign();
    void setSign(std::string sign);

    int getValue();
    void setValue(int value);
}
}