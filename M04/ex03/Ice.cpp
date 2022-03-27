//
// Created by Giyoung Lee on 3/27/22.
//

#include "Ice.hpp"

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
    (void)target;
}
