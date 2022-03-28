//
// Created by Giyoung Lee on 3/28/22.
//

#include "GradeTooHighException.hpp"

const char *GradeTooHighException::what() const throw() {
	return "GradeTooHighException";
}
