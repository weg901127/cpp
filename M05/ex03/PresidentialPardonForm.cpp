//
// Created by Giyoung Lee on 3/30/22.
//

#include "PresidentialPardonForm.hpp"

#define PSIGN   25
#define PEXEC   5
#define PFormName "PresidentialPardonForm"

PresidentialPardonForm::PresidentialPardonForm() : Form() {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &src){
	*this = src;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
		: Form(PFormName, target, PSIGN, PEXEC) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &src) {
	Form::setName(src.getName());
	Form::setIsSigned(src.getIsSigned());
	Form::setSignGrade(src.getSignGrade());
	Form::setExecuteGrade(src.getExecuteGrade());
	Form::setTarget(src.getTarget());
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat &src) const {
	if (!Form::getIsSigned())
		throw Form::NotSignedException();
	if (src.getGrade() > Form::getExecuteGrade())
		throw Form::GradeTooLowException();
	std::cout << src.getName() + " executed " + Form::getName() << std::endl;
	std::cout << Form::getTarget() + " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
