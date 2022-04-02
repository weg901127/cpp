//
// Created by Giyoung Lee on 3/28/22.
//
#include "Char.hpp"
#include "Int.hpp"
static void printer(Caster* src)
{
	std::cout << *src << std::endl;
	delete src;
}

int main(int argc, char** argv){
	if (argc > 2 || argc == 1) {
		std::cout << "Error" << std::endl;
		return 1;
	}
	std::cout << "char: ";
	printer(new Char(argv[1]));
	std::cout << "int: ";
	printer(new Int(argv[1]));
	std::cout << "float: ";
	printer(new Int(argv[1]));
	std::cout << "double: ";
	printer(new Int(argv[1]));
	return 0;
}
