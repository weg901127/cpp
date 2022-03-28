//
// Created by Giyoung Lee on 3/28/22.
//

#ifndef CPP05_EX00_GRADETOOLOWEXCEPTION_HPP
#define CPP05_EX00_GRADETOOLOWEXCEPTION_HPP


#include <exception>
#include "ExceptionPrinter.hpp"

class GradeTooLowException : public std::exception, public ExceptionPrinter{
public:
	const char *what() const _NOEXCEPT;
};



#endif //CPP05_EX00_GRADETOOLOWEXCEPTION_HPP
