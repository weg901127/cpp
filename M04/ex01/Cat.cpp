//
// Created by Giyoung Lee on 3/25/22.
//


#include "Cat.hpp"

Cat::Cat() : type("Cat"), CatBrain(*new Brain()){
    std::cout << type + " hi~쀍쀍쀍" << std::endl;
}
Cat::~Cat() {
    delete &CatBrain;
    std::cout << type + " bye~쀍쀍쀍" << std::endl;
}


Cat::Cat(const Cat &src) : CatBrain(*new Brain()){
    *this = src;
}

Cat &Cat::operator=(const Cat &src) {
    type = src.type;
    CatBrain = src.CatBrain;
    return *this;
}

void Cat::makeSound() const{
    std::cout << type + " 쀍!!!!!!!!!!!!!!!!!!" << std::endl;
}

std::string Cat::getType() const {
    return type;
}
