#include "Zombie.hpp"

int	main( void ){
	Zombie *zb = zombieHorde(10, "zb");
	for (int i = 0 ; i < 10 ; i++)
		zb[i].announce();
	delete []zb;
	return 0;
}
