//
// Created by Giyoung Lee on 3/27/22.
//

#ifndef CPP04_EX03_CHARACTER_HPP
#define CPP04_EX03_CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter{
private:
    std::string const name;
    AMateria*   inventory[MAX_IVT];
    int         cur;
public:
    Character();
    ~Character();
    Character(std::string const& name);
    const std::string &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};


#endif //CPP04_EX03_CHARACTER_HPP
