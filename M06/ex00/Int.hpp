//
// Created by Giyoung Lee on 4/2/22.
//

#ifndef CPP05_EX00_INT_HPP
#define CPP05_EX00_INT_HPP

#include "Caster.hpp"

class Int : public Caster{
private:
	int integer;
protected:
	void cast(std::string src);
public:
	Int();
	~Int();
	Int(Int& src);
	Int(std::string const& src);
	Int& operator=(Int& src);
};

#endif //CPP05_EX00_INT_HPP
