//
// Created by Giyoung Lee on 4/1/22.
//

#include "Caster.hpp"

Caster::Caster() : argv(""){}

Caster::~Caster() {

}

Caster::Caster(Caster &src) {
	*this = src;
}

Caster &Caster::operator=(Caster &src) {
	argv = src.argv;
	return *this;
}

Caster::Caster(char *src) {
	argv = src;
	std::cout << argv << std::endl;
}

int Caster::toInt() const{
	return 0;
}

char Caster::toChar() const{
	return 0;
}

float Caster::toFloat() const{
	return 0;
}

double Caster::toDouble() const{
	return 0;
}

std::ostream &operator<<(std::ostream &os, const Caster &caster) {
	std::cout << "char: " << caster.toChar() << '\n';
	std::cout << "int: " << caster.toInt() << '\n';
	std::cout << "float: " << caster.toFloat() << '\n';
	std::cout << "double: " << caster.toDouble() << '\n';
	return os;
}
