//
// Created by Giyoung Lee on 3/28/22.
//

#include "GradeTooLowException.hpp"

const char *GradeTooLowException::what() const throw() {
	return "GradeTooLowException";
}