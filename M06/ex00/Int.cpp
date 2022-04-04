//
// Created by Giyoung Lee on 4/2/22.
//

#include <sstream>
#include "Int.hpp"

Int::Int() : integer(0){

}

Int::~Int() {}

Int::Int(Int &src) {
	*this = src;
}

Int::Int(const std::string &src) {
	cast(src);
}

Int &Int::operator=(Int &src) {
	Caster::setArgv(src.getArgv());
	integer = src.integer;
	return *this;
}

void Int::cast(std::string src) {
	double d;
    std::string tmp = removef(src);
	std::stringstream c(tmp);
	c >> d;
	integer = d;
	try {
		if ((integer == 0 && invaliddot(tmp))
		|| (!isnum(tmp))
		|| (integer == INT_MAX && (std::to_string(integer) != tmp))
		|| (integer == INT_MIN && (std::to_string(integer) != tmp)))
			throw ImpossibleException();
		if (src.length() == 1 && isalpha(src[0]))
			setArgv(std::to_string((int)src[0]));
		else
			setArgv(std::to_string(integer));
	} catch (std::exception& e) {
		Caster::setArgv(e.what());
	}
}