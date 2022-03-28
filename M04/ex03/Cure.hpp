//
// Created by Giyoung Lee on 3/27/22.
//

#ifndef CPP04_EX03_CURE_HPP
#define CPP04_EX03_CURE_HPP


#include "AMateria.hpp"

class Cure : public AMateria{
public:
    Cure();
    ~Cure();
    Cure(Cure const& src);
    Cure&    operator=(Cure const& src);
    Cure*    clone() const;
    void    use(ICharacter &target);
};


#endif //CPP04_EX03_CURE_HPP
