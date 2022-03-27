//
// Created by Giyoung Lee on 3/27/22.
//

#ifndef CPP04_EX03_ICE_HPP
#define CPP04_EX03_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
public:
    Ice();
    ~Ice();
    Ice(Ice const& src);
    Ice&    operator=(Ice const& src);
    Ice*    clone() const;
    void    use(ICharacter &target);
};
#endif //CPP04_EX03_ICE_HPP
