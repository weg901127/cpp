//
// Created by Giyoung Lee on 4/1/22.
//

#include "Caster.hpp"

Caster::Caster() : argv(""){}

Caster::~Caster() {}

Caster::Caster(Caster &src) {
	*this = src;
}

Caster &Caster::operator=(Caster &src) {
	argv = src.argv;
	return *this;
}

Caster::Caster(char *src) {
	argv = src;
}

const std::string &Caster::getArgv() const {
	return argv;
}

void Caster::setArgv(const std::string &src) {
	Caster::argv = src;
}

bool Caster::isNan(const std::string &src) {
	return (src == "nan" || src == "nanf");
}

const char *Caster::ImpossibleException::what() const throw() {
	return "impossible";
}

std::ostream &operator<<(std::ostream &os, const Caster &caster) {
	std::cout << caster.getArgv();
	return os;
}