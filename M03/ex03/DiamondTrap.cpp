//
// Created by Giyoung Lee on 3/21/22.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : hitpoints(FragTrap::getHitpoints()), energypoints(ScavTrap::getEnergypoints()), attackdamage(FragTrap::getAttackdamage()){

}
DiamondTrap::~DiamondTrap() {}

DiamondTrap::DiamondTrap(std::string const& name)
: ScavTrap::ClapTrap(name + "_clap_name")
, name(name)
, hitpoints(FragTrap::getHitpoints()), energypoints(ScavTrap::getEnergypoints()), attackdamage(FragTrap::getAttackdamage()) {}

void DiamondTrap::attack(std::string const& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "Diamond : " + name << std::endl;
    std::cout << "ScavClap    : " + ScavTrap::ClapTrap::getName() << std::endl;
    std::cout << "FragClap    : " + FragTrap::ClapTrap::getName() << std::endl;
}

