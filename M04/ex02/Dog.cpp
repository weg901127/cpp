//
// Created by Giyoung Lee on 3/25/22.
//


#include "Dog.hpp"

Dog::Dog() : type("Dog") {
    std::cout << type + " hi~뀈뀈뀈" << std::endl;
    DogBrain = new Brain();
    DogBrain->setIdeas(type[0]);
}
Dog::~Dog() {
    delete DogBrain;
    std::cout << type + " bye~뀈뀈뀈" << std::endl;
}


Dog::Dog(const Dog &src) {
    *this = src;
}

Dog &Dog::operator=(const Dog &src) {
    type = src.type;
    *DogBrain = *src.DogBrain;
    return *this;
}

void Dog::makeSound() const{
    std::cout << type + " 뀈ㅋㅋㅋㅋ!!!!!!!!!!!!!!!!!!" + " : " +DogBrain->getIdeas()[0]<< std::endl;
}

std::string Dog::getType() const {
    return type;
}
