//
// Created by Giyoung Lee on 3/25/22.
//

#include "WrongDog.hpp"

WrongDog::WrongDog() : type("WrongDog"){
    std::cout << type + " hi~뀈뀈뀈" << std::endl;
}
WrongDog::~WrongDog() {
    std::cout << type + " bye~뀈뀈뀈" << std::endl;
}


WrongDog::WrongDog(const WrongDog &src) {
    *this = src;
}

WrongDog &WrongDog::operator=(const WrongDog &src) {
    type = src.type;
    return *this;
}

void WrongDog::makeSound() const{
    std::cout << type + " 뀈ㅋㅋㅋㅋ!!!!!!!!!!!!!!!!!!" << std::endl;
}

std::string WrongDog::getType() const {
    return type;
}
