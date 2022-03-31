//
// Created by Giyoung Lee on 3/31/22.
//

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {
	std::string& ref0 = const_cast<std::string&>(forms[0]);
	std::string& ref1 = const_cast<std::string&>(forms[1]);
	std::string& ref2 = const_cast<std::string&>(forms[2]);
	ref0 = "presidential pardon";
	ref1 = "robotomy request";
	ref2 = "shrubbery creation";
}

Intern::~Intern() {}

Intern::Intern(Intern &src) {
	*this = src;
}

Intern &Intern::operator=(Intern &src) {
	std::string& ref0 = const_cast<std::string&>(forms[0]);
	std::string& ref1 = const_cast<std::string&>(forms[1]);
	std::string& ref2 = const_cast<std::string&>(forms[2]);
	ref0 = src.forms[0];
	ref1 = src.forms[1];
	ref2 = src.forms[2];
	return *this;
}

Form *Intern::makeForm(const std::string &formName, const std::string &target) {
	int i = 0;
	while (i < 3) {
		if (forms[i] == formName)
			break;
		i++;
	}
	if (i == 3)
		throw std::exception();
	switch (i) {
		case 0:
			return new PresidentialPardonForm(target);
		case 1:
			return new RobotomyRequestForm(target);
		case 2:
			return new ShrubberyCreationForm(target);
	}
	return NULL;
}
