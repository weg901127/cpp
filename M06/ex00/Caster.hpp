//
// Created by Giyoung Lee on 4/1/22.
//

#ifndef CPP05_EX00_CASTER_HPP
#define CPP05_EX00_CASTER_HPP

#include <iostream>

class Caster {
private:
	std::string argv;
public:
	Caster();
	~Caster();
	Caster(Caster& src);
	Caster(char *src);
	Caster& operator=(Caster& src);

	int     toInt() const;
	char    toChar() const;
	float   toFloat() const;
	double  toDouble() const;
};


std::ostream &operator<<(std::ostream &os, const Caster &caster);
#endif //CPP05_EX00_CASTER_HPP
