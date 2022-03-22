#include "Zombie.hpp"

Zombie::Zombie( std::string const& name ){
	this->name = name;
}

Zombie::~Zombie( void ){
	std::cout << this->name << " died" << std::endl;
}

void Zombie::announce( void ){
	std::cout << "<" << this->name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
