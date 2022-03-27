//
// Created by Giyoung Lee on 3/27/22.
//

#include "MateriaSource.hpp"
#include <iostream>
void MateriaSource::learnMateria(AMateria *materia) {
    if (cur == SLOT_MAX)
        std::cout << "FULL SLOT" << std::endl;
    else
        slot[cur++] = materia;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
    for (int i = 0; i < cur; i++) {
            if (slot[i]->getType() == type)
                return slot[i];
    }
    return 0;
}

MateriaSource::MateriaSource() {}

MateriaSource::~MateriaSource() {}

MateriaSource::MateriaSource(MateriaSource &src) {
    *this=src;
}

MateriaSource &MateriaSource::operator=(MateriaSource &src) {
    return  *this;
}
