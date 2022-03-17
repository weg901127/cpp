#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen a = Karen();

	if (argc == 2)
		a.complain(argv[1]);
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return 1;
}
