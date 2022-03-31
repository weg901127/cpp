//
// Created by Giyoung Lee on 3/27/22.
//

#include "Character.hpp"
#include "AMateria.hpp"
Character::Character() {}

Character::Character(std::string const& name) : name(name){
    for (int i = 0; i < 4; i++) {
        inventory[i] = NULL;
    }
}

Character::~Character() {
    for (int i = 0; i < MAX_IVT; i++) {
        if (inventory[i] != NULL)
            delete inventory[i];
    }
}
const std::string &Character::getName() const {
    return name;
}

void Character::equip(AMateria *m) {
    for (int i = 0; i < MAX_IVT; i++) {
        if(inventory[i] == NULL) {
            inventory[i] = m;
            return;
        }
    }
    delete m;
}

void Character::unequip(int idx) {
    if (idx < MAX_IVT)
        inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
    if(idx < MAX_IVT && inventory[idx] != NULL)
        inventory[idx]->use(target);
}

Character::Character(Character &src) {
	*this = src;
}

Character &Character::operator=(Character &src) {
	std::string& nameR = const_cast<std::string&>(name);
	nameR = src.name;
	for (int i = 0; i < MAX_IVT; i++) {
		inventory[i] = src.inventory[i];
	}
	return *this;
}


