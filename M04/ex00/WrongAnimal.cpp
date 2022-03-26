//
// Created by Giyoung Lee on 3/25/22.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal"){
    std::cout << type + " hi~" << std::endl;
}
WrongAnimal::~WrongAnimal() {
    std::cout << type + " bye~" << std::endl;
}


WrongAnimal::WrongAnimal(const WrongAnimal &src) {
    *this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src) {
    type = src.type;
    return *this;
}

void WrongAnimal::makeSound() const{
    std::cout << type + " !!!!!!!!!!!!!!!!!!!!!\?\?\?!!!" << std::endl;
}

void WrongAnimal::setType(std::string const& src) {
    this->type = src;
}

std::string WrongAnimal::getType() const{
    return type;
}
