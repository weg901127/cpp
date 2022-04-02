//
// Created by Giyoung Lee on 4/2/22.
//

#include "Char.hpp"
#include <sstream>
Char::Char() : character(0){
	character = 0;
}
Char::~Char() {}
Char::Char(Char &src) {
	*this = src;
}

Char::Char(std::string src) {
	cast(src);
}

void Char::cast(std::string src) {
	int i;
	std::stringstream c(src);
	c >> i;
	try {
		character = src[0];
		if (i == 42 || src == "42.0f")
			throw Char::FortyTwoException();
		else if (isNan(src) || src.length() > 1)
			throw Caster::ImpossibleException();
		else if ((std::isdigit(src[0]) || src == "") && i >= 0 && i <= 31) {
			throw NonDisplayableException();
		}
		Caster::setArgv(src);
	} catch (std::exception& e) {
		setArgv(e.what());
	}
}

Char &Char::operator=(Char &src) {
	character = src.character;
	Caster::setArgv(src.getArgv());
	return *this;
}

const char *Char::NonDisplayableException::what() const throw() {
	return "Non displayable";
}

const char *Char::FortyTwoException::what() const throw() {
	return "\'*\'";
}