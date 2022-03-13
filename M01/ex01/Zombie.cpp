#include "Zombie.hpp"

Zombie::Zombie( void ){
	std::cout << "df\n";
}

Zombie::Zombie( std::string name ){
	this->name = name;
	std::cout << "p1\n";
}

Zombie::~Zombie( void ){
	std::cout << this->name << " died" << std::endl;
}

void Zombie::announce( void ){
	std::cout << "<" << this->name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
