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
static bool invaliddot(std::string src) {
	int cntdot = 0;
	for (size_t i = 0; i < src.length();) {
		if (src[i] == '.')
			cntdot++;
		i++;
	}
	return !(cntdot == 1 || cntdot == 0);
}
static std::string removef(std::string src) {
	if (src.find("f") == src.length() - 1)
		src.erase(src.begin() + src.find("f"));
	return src;
}
void Int::cast(std::string src) {
	double d;
	std::stringstream c(removef(src));
	c >> d;
	integer = d;
	try {
		if ((integer == 0 && invaliddot(src))
		|| (integer == 0 && src.length() > 1 && ((std::to_string(integer) != src) || (std::to_string(integer) + "f" != src)))
		|| (integer == INT_MAX && (std::to_string(integer) != src))
		|| (integer == INT_MIN && (std::to_string(integer) != src)))
			throw ImpossibleException();
		if (src.length() == 1 && isalpha(src[0]))
			setArgv(std::to_string((int)src[0]));
		else
			setArgv(std::to_string(integer));
	} catch (std::exception& e) {
		Caster::setArgv(e.what());
	}
}
