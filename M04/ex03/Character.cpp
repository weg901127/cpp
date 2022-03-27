//
// Created by Giyoung Lee on 3/27/22.
//

#include "Character.hpp"

Character::Character() {}

Character::Character(std::string const& name) : name(name){}

Character::~Character() {

}
const std::string &Character::getName() const {
    return name;
}

void Character::equip(AMateria *m) {

}

void Character::unequip(int idx) {

}

void Character::use(int idx, ICharacter &target) {

}


