//
// Created by Giyoung Lee on 3/27/22.
//

#ifndef CPP04_EX03_ICHARACTER_HPP
#define CPP04_EX03_ICHARACTER_HPP

#include <iostream>
class AMateria;

class ICharacter {
public:
    virtual ~ICharacter(){};
    virtual std::string const& getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};


#endif //CPP04_EX03_ICHARACTER_HPP
