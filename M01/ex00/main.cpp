#include "Zombie.hpp"

int	main( void ){
	Zombie zb1 = Zombie("z1");
	zb1.announce();
	Zombie *zb2 = newZombie("z2");
	zb2->announce();
	randomChump("z3");
	delete zb2;
	return 0;
}
