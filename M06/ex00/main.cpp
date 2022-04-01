//
// Created by Giyoung Lee on 3/28/22.
//
#include "Caster.hpp"
#include <cmath>
int main(int argc, char** argv){
	if (argc > 2)
		std::cout << "Error" << std::endl;
	Caster a(argv[1]);
	std::cout << a << std::endl;
	return 0;
}
