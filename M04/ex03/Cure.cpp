//
// Created by Giyoung Lee on 3/27/22.
//

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() {
    type = "cure";
}

Cure::~Cure() {}

Cure *Cure::clone() const {
    Cure *res = new Cure();
    *res = *this;
    return res;
}

Cure &Cure::operator=(const Cure &src) {
    type = src.type;
    return *this;
}

Cure::Cure(const Cure &src) {
    *this = src;
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}
