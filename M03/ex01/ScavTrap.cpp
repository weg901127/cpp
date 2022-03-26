#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : hitpoints(100), energypoints(50), attackdamage(20){
    std::cout << "SCCCCCCCCCAAV" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << name + " SCCCCCCCCCA.... _" << std::endl;
}

ScavTrap::ScavTrap(std::string const& name) : ClapTrap(name), name(name), hitpoints(100), energypoints(50), attackdamage(20){
    std::cout << name + " SCCCCCCCCCAAV" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    std::cout << "kill " + target + " ATACKKKKK!!!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src) {
    *this = src;
}

ScavTrap &ScavTrap::operator=(ScavTrap const& src) {
    this->name = src.name;
    this->hitpoints = src.hitpoints;
    this->energypoints = src.energypoints;
    this->attackdamage = src.attackdamage;
    return *this;
}

int ScavTrap::getHitpoints() const {
    return hitpoints;
}

int ScavTrap::getEnergypoints() const {
    return energypoints;
}

int ScavTrap::getAttackdamage() const {
    return attackdamage;
}

std::string ScavTrap::getName() const {
    return name;
}
