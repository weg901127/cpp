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
// stack --> 해당 스코프를 벗어날때 소멸
// heap --> new 키워드를 이용했다면 delete시점에 소멸