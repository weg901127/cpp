//
// Created by Giyoung Lee on 3/25/22.
//


#include "Dog.hpp"

Dog::Dog() : type("Dog"){
    std::cout << type + " hi~뀈뀈뀈" << std::endl;
}
Dog::~Dog() {
    std::cout << type + " bye~뀈뀈뀈" << std::endl;
}


Dog::Dog(const Dog &src) {
    *this = src;
}

Dog &Dog::operator=(const Dog &src) {
    type = src.type;
    return *this;
}

void Dog::makeSound() const{
    std::cout << type + " 뀈ㅋㅋㅋㅋ!!!!!!!!!!!!!!!!!!" << std::endl;
}

std::string Dog::getType() const {
    return type;
}
