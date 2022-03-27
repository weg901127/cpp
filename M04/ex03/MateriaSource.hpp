//
// Created by Giyoung Lee on 3/27/22.
//

#ifndef CPP04_EX03_MATERIASOURCE_HPP
#define CPP04_EX03_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#define SLOT_MAX 4
class MateriaSource : public IMateriaSource{
private:
    int         cur;
    AMateria*   slot[SLOT_MAX];
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(MateriaSource& src);
    MateriaSource& operator=(MateriaSource& src);
    void learnMateria(AMateria *materia);
    AMateria *createMateria(const std::string &type);
};


#endif //CPP04_EX03_MATERIASOURCE_HPP
