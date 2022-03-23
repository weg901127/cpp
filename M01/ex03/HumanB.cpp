#include "HumanB.hpp"

HumanB::HumanB( std::string const& name ){
	this->name = name;
}

void	HumanB::attack( void ){
	std::cout << "<" + this->name + ">"<< " attacks with their " << "<" + this->wtype->getType() + ">"<< std::endl;
}

void	HumanB::setWeapon(Weapon &wtype){
	this->wtype = &wtype;
}
