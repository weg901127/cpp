//
// Created by Giyoung Lee on 3/25/22.
//


#include "Cat.hpp"

Cat::Cat() : type("Cat") {
    std::cout << type + " hi~쀍쀍쀍" << std::endl;
    CatBrain = new Brain();
    CatBrain->setIdeas(type[0]);
}
Cat::~Cat() {
    delete CatBrain;
    std::cout << type + " bye~쀍쀍쀍" << std::endl;
}


Cat::Cat(const Cat &src) {
    *this = src;
}

Cat &Cat::operator=(const Cat &src) {
    type = src.type;
    *CatBrain = *src.CatBrain;
    return *this;
}

void Cat::makeSound() const{
    std::cout << type + " 쀍!!!!!!!!!!!!!!!!!!" + " : " +CatBrain->getIdeas()[0]<< std::endl;
}

std::string Cat::getType() const {
    return type;
}