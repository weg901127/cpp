//
// Created by Giyoung Lee on 4/2/22.
//

#ifndef CPP05_EX00_CHAR_HPP
#define CPP05_EX00_CHAR_HPP

#include "Caster.hpp"

class Char : public Caster{
private:
	char character;
protected:
	void cast(std::string src);
	class NonDisplayableException : public std::exception {
	public:
		const char *what() const throw();
	};
	class FortyTwoException : public std::exception {
	public:
		const char *what() const throw();
	};
public:
	Char();
	~Char();
	Char(Char &src);
	Char(std::string src);
	Char&   operator=(Char& src);
};

#endif //CPP05_EX00_CHAR_HPP
