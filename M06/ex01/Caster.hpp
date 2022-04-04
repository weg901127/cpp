//
// Created by Giyoung Lee on 4/4/22.
//

#ifndef CPP05_EX00_CASTER_HPP
#define CPP05_EX00_CASTER_HPP

#include <iostream>

class Caster {
private:
	std::string argv;
	double      db;
	int         precision;
	unsigned char c;
	Caster();
public:
	Caster(std::string const& src);
	~Caster();
	Caster(Caster& src);
	Caster& operator=(Caster& src);

	void toChar();
	void toInt();
	void toFloat();
	void toDouble();
};


#endif //CPP05_EX00_CASTER_HPP
