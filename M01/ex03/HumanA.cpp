#include "HumanA.hpp"

HumanA::HumanA(std::string const& name, Weapon &wtype) : wtype(wtype), name(name){};
void	HumanA::attack( void ){
	std::cout << "<" + this->name  + ">" << " attacks with their " << "<" + this->wtype.getType() + ">"<< std::endl;
}
