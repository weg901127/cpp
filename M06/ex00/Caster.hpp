//
// Created by Giyoung Lee on 4/1/22.
//

#ifndef CPP05_EX00_CASTER_HPP
#define CPP05_EX00_CASTER_HPP

#include <iostream>

class Caster {
private:
	std::string argv;
protected:
	virtual void cast(std::string src) = 0;
	void setArgv(const std::string &argv);
	class ImpossibleException : public std::exception {
	public:
		virtual const char *what() const throw();
	};
	virtual bool isNan(std::string const& src);
public:
	Caster();
	virtual ~Caster();
	Caster(Caster& src);
	Caster(char *src);
	Caster& operator=(Caster& src);
	const std::string &getArgv() const;
};
std::ostream &operator<<(std::ostream &os, const Caster &caster);
#endif //CPP05_EX00_CASTER_HPP
