//
// Created by Giyoung Lee on 3/28/22.
//
#include "Caster.hpp"

int main(int argc, char** argv){
	if (argc > 2 || argc == 1) {
		std::cout << "Error" << std::endl;
		return 1;
	}
	Caster a(argv[1]);
	a.toChar();
	a.toInt();
	a.toFloat();
	a.toDouble();
	return 0;
}
