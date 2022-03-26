//
// Created by Giyoung Lee on 3/25/22.
//


#include "Cat.hpp"

Cat::Cat() : type("Cat"){
    std::cout << type + " hi~쀍쀍쀍" << std::endl;
}
Cat::~Cat() {
    std::cout << type + " bye~쀍쀍쀍" << std::endl;
}


Cat::Cat(const Cat &src) {
    *this = src;
}

Cat &Cat::operator=(const Cat &src) {
    type = src.type;
    return *this;
}

void Cat::makeSound() const{
    std::cout << type + " 쀍!!!!!!!!!!!!!!!!!!" << std::endl;
}

std::string Cat::getType() const {
    return type;
}
