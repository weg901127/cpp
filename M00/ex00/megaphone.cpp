#include <iostream>
#include <ctype.h>

int	main(int argc, char **argv)
{
	if (argc == 1 || (argc == 2 && argv[1][0] == 0))
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1 ; argv[i] != 0 ; i++)
		for (int j = 0 ; argv[i][j] != 0 ; j++)
			std::cout << (char)toupper(argv[i][j]);
	std::cout << std::endl;
	return 0;
}
