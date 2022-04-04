//
// Created by Giyoung Lee on 4/4/22.
//

#include "Caster.hpp"
#include <stdlib.h>
#include <iomanip>
static bool isNum(std::string src) {
	if (src.length() == 0)
		return false;
	for (std::string::iterator it = src.begin(); it != src.end();) {
		if ((!isdigit(*it) && *it != '.' && *it != 'f')|| (*it == '.' && (it + 1 == src.end() || it == src.begin())))
			return false;
		it++;
	}
	return true;
}

static bool isNAN_INF(std::string const& src) {
	return (src == "nan" || src == "nanf" || src=="inf" || src=="inff" || src=="-inf" || src=="-inff");
}

static bool isImpossible(std::string argv, double db){
	if (argv.length() == 1)
		return false;
	std::string src = std::to_string(db);
	return ((argv.length() != 1 && !isNum(argv)));
}

static bool isChar(double const& db){
	return (static_cast<int>(db) >= 0 && static_cast<int>(db) <= 255);
}

Caster::Caster() {}

Caster::Caster(const std::string &src) {
	precision = INT_MAX;
	argv = src;
	if (src.length() != 0 && src.length() != 1) {
		db = std::atof(argv.c_str());
		c = static_cast<unsigned char>(static_cast<int>(db));
	} else {
		db = static_cast<double>(static_cast<int>(src[0]));
		c = static_cast<unsigned char>(src[0]);
	}
	if (argv.find('.') == std::string::npos || argv.find(".0")) {
		precision = 1;
	}
	std::cout << (precision == 1 ? std::fixed : std::defaultfloat);
}

Caster::~Caster() {}

Caster::Caster(Caster &src) {
	*this = src;
}

Caster &Caster::operator=(Caster &src) {
	argv = src.argv;
	db = src.db;
	c = src.c;
	return *this;
}

void Caster::toChar() {
	std::cout << "char: ";
	if (!isChar(db) || isImpossible(argv,db))
		std::cout << "impossible";
	else if (!std::isprint(c))
		std::cout << "Non displayable";
	else
		std::cout << '\'' << c << '\'';
	std::cout << std::endl;
}

void Caster::toInt() {
	int i = static_cast<int>(round(db));
	std::cout << "int: " +
	(isNAN_INF(std::to_string(db))
	|| isImpossible(argv, db)
	|| static_cast<double>(i) != round(db)
	? "impossible" : std::to_string(i))
	<< std::endl;
}

void Caster::toFloat() {
	std::cout << std::setprecision(precision) << "float: ";
	if (isImpossible(argv, db) && !isNAN_INF(std::to_string(db)))
		std::cout << "impossible";
	else
		std::cout << static_cast<float>(db) << "f";
	std::cout << std::endl;
}

void Caster::toDouble() {
	std::cout << std::setprecision(precision) << "double: ";
	if (isImpossible(argv, db) && !isNAN_INF(std::to_string(db)))
		std::cout << "impossible";
	else
		std::cout << db;
	std::cout << std::endl;
}
