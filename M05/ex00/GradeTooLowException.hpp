//
// Created by Giyoung Lee on 3/28/22.
//

#ifndef CPP05_EX00_GRADETOOLOWEXCEPTION_HPP
#define CPP05_EX00_GRADETOOLOWEXCEPTION_HPP


#include <exception>
#include "AExceptionPrinter.hpp"

class GradeTooLowException : public std::exception, public AExceptionPrinter{
private:
	void empty(){};
public:
	const char *what() const throw();
};



#endif //CPP05_EX00_GRADETOOLOWEXCEPTION_HPP
