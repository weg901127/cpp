//
// Created by Giyoung Lee on 3/21/22.
//

#include "FragTrap.h"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name),name(name), hitpoints(100), energypoints(100), attackdamage(30) {
    std::cout << name + " : FRRRRRRRRRRAAAAAAAGGGGGGGGGG!!!!!!" << std::endl;
}
FragTrap::FragTrap() : hitpoints(100), energypoints(100), attackdamage(30){
    std::cout << "FRRRRRRRRRRAAAAAAAGGGGGGGGGG!!!!!!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FRAG OFF" << std::endl;
}

FragTrap::FragTrap(FragTrap const& src) {
    *this = src;
}

FragTrap &FragTrap::operator=(FragTrap const& src) {
    this->name = src.name;
    this->attackdamage = src.attackdamage;
    this->energypoints = src.energypoints;
    this->hitpoints = src.hitpoints;
    return *this;
}

void FragTrap::highFivesGuys() {
    std::cout << "positive high fives request" << std::endl;
}

