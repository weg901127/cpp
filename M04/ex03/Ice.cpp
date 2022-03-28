//
// Created by Giyoung Lee on 3/27/22.
//

#include "Ice.hpp"
#include "Character.hpp"
//#include <iostream>

Ice::Ice() {
    type = "ice";
}

Ice::~Ice() {}

Ice *Ice::clone() const {
    Ice *res = new Ice();
    *res = *this;
    return res;
}

Ice &Ice::operator=(const Ice &src) {
    type = src.type;
    return *this;
}

Ice::Ice(const Ice &src) {
    *this = src;
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " + target.getName() + " *"<< std::endl;
}
