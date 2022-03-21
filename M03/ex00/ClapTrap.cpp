#include "ClapTrap.hpp"
#include <iostream>
#include <ostream>

ClapTrap::ClapTrap() : hitpoints(10), energypoints(10), attackdamage(0) {
	std::cout << "boooooOooooyahhh" << std::endl;
	std::cout << "name : " + this->name << std::endl;
	std::cout << "Hitpoints : " << this->hitpoints << std::endl;
	std::cout << "Energy points : " << this->energypoints << std::endl;
	std::cout << "attack damage : " << this->attackdamage << std::endl;
}

ClapTrap::ClapTrap(std::string name) : hitpoints(10), energypoints(10), attackdamage(0) {
	std::cout << name + ": boooooOooooyahhh" << std::endl;
	this->name = name;
	std::cout << "name : " + this->name << std::endl;
	std::cout << "Hitpoints : " << this->hitpoints << std::endl;
	std::cout << "Energy points : " << this->energypoints << std::endl;
	std::cout << "attack damage : " << this->attackdamage << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << this->name + " : Turn Off" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& src) {
	*this = src;
}

ClapTrap& ClapTrap::operator=(ClapTrap &src) {
	this->attackdamage = src.attackdamage;
	this->energypoints = src.energypoints;
	this->hitpoints = src.hitpoints;
	this->name = src.name;
	return *this;
}

void		ClapTrap::attack(std::string const& target) {
	std::cout << "ClapTrap <" + this->name + "> attack <" + target + ">, causing <" << this->attackdamage
		<< "> points of damage !" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "Shit!! -" << amount << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "Yeahhhhh +" << amount << std::endl;
}
