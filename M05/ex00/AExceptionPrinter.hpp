//
// Created by Giyoung Lee on 3/28/22.
//

#ifndef CPP05_EX00_AEXCEPTIONPRINTER_HPP
#define CPP05_EX00_AEXCEPTIONPRINTER_HPP

#include <iostream>
#include <exception>
class AExceptionPrinter {
protected:
	virtual void empty() = 0;
};
std::ostream&	operator<<(std::ostream& out, const std::exception& src);
#endif //CPP05_EX00_AEXCEPTIONPRINTER_HPP
