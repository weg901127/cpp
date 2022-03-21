#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap();
	ClapTrap("jekim").attack("jekim");
	ClapTrap("42s_PolarBear").takeDamage(0);
	ClapTrap("42s_Dall").beRepaired(100);
	return 0;
}