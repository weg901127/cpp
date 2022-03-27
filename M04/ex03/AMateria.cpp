//
// Created by Giyoung Lee on 3/27/22.
//

#include "AMateria.hpp"
#include "ICharacter.hpp"
AMateria::AMateria() : type("Materia"){}

AMateria::AMateria(const std::string &type) : type(type){}

const std::string &AMateria::getType() const {
    return type;
}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria &src) {
    *this = src;
}

AMateria &AMateria::operator=(const AMateria &src) {
    type = src.type;
    return  *this;
}

void AMateria::use(ICharacter &target) {
    (void)target;
}

