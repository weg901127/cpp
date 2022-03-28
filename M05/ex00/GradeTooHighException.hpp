//
// Created by Giyoung Lee on 3/28/22.
//

#ifndef CPP05_EX00_GRADETOOHIGHEXCEPTION_HPP
#define CPP05_EX00_GRADETOOHIGHEXCEPTION_HPP

#include <exception>
#include "ExceptionPrinter.hpp"
class GradeTooHighException : public std::exception, public ExceptionPrinter{
public:
	const char *what() const _NOEXCEPT;
};

#endif //CPP05_EX00_GRADETOOHIGHEXCEPTION_HPP
