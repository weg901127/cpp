//
// Created by Giyoung Lee on 3/25/22.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() : type("WrongCat"){
    std::cout << type + " hi~쀍쀍쀍" << std::endl;
}
WrongCat::~WrongCat() {
    std::cout << type + " bye~쀍쀍쀍" << std::endl;
}


WrongCat::WrongCat(const WrongCat &src) {
    *this = src;
}

WrongCat &WrongCat::operator=(const WrongCat &src) {
    type = src.type;
    return *this;
}

void WrongCat::makeSound() const{
    std::cout << type + " 쀍!!!!!!!!!!!!!!!!!!" << std::endl;
}

std::string WrongCat::getType() const {
    return type;
}
