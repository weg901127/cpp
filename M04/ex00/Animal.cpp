//
// Created by Giyoung Lee on 3/25/22.
//

#include "Animal.hpp"

Animal::Animal() : type("Animal"){
    std::cout << type + " hi~" << std::endl;
}
Animal::~Animal() {
    std::cout << type + " bye~" << std::endl;
}


Animal::Animal(const Animal &src) {
    *this = src;
}

Animal &Animal::operator=(const Animal &src) {
    type = src.type;
    return *this;
}

void Animal::makeSound() const{
    std::cout << type + " !!!!!!!!!!!!!!!!!!!!!\?\?\?!!!" << std::endl;
}

void Animal::setType(std::string const& src) {
    this->type = src;
}

std::string Animal::getType() const{
    return type;
}
