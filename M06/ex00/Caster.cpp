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
bool Caster::invaliddot(std::string src) {
    int cntdot = 0;
    for (size_t i = 0; i < src.length();) {
        if (src[i] == '.' && i != 0 && isdigit(src[i - 1]) && isdigit(src[i + 1]))
            cntdot++;
        i++;
    }
    return !(cntdot == 1 || cntdot == 0);
}

std::string Caster::removef(std::string src) {
    if (src.find("f") == src.length() - 1)
        src.erase(src.begin() + src.find("f"));
    return src;
}

bool Caster::isnum(std::string src) {
    for (std::string::iterator it = src.begin(); it != src.end();) {
        if ((!isdigit(*it) && *it != '.') || (*it == '.' && (it + 1 == src.end() || it == src.begin())))
            return false;
        it++;
    }
    return true;
}
