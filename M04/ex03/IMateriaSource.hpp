//
// Created by Giyoung Lee on 3/27/22.
//

#ifndef CPP04_EX03_IMATERIASOURCE_HPP
#define CPP04_EX03_IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource {
public:
    virtual ~IMateriaSource() {};
    virtual void    learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const& type) = 0;
};

#endif //CPP04_EX03_IMATERIASOURCE_HPP
