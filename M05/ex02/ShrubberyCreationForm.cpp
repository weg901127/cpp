//
// Created by Giyoung Lee on 3/30/22.
//

#include "ShrubberyCreationForm.hpp"

#define SSIGN   145
#define SEXEC   137
#define SFormName "ShrubberyCreationForm"

ShrubberyCreationForm::ShrubberyCreationForm() : Form() {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src){
	*this = src;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
: Form(SFormName, target,SSIGN, SEXEC) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &src) {
	Form::setName(src.getName());
	Form::setIsSigned(src.getIsSigned());
	Form::setSignGrade(src.getSignGrade());
	Form::setExecuteGrade(src.getExecuteGrade());
	Form::setTarget(src.getTarget());
	return *this;
}

void ShrubberyCreationForm::beSigned(Bureaucrat &src) {
	if (src.getGrade() > Form::getSignGrade()) throw Form::GradeTooLowException();
	Form::setIsSigned(true);
}

void ShrubberyCreationForm::execute(Bureaucrat &src) const {
	if (!Form::getIsSigned())
		throw Form::NotSignedException();
	if (src.getGrade() > Form::getExecuteGrade())
		throw Form::GradeTooLowException();
}
