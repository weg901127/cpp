//
// Created by Giyoung Lee on 3/30/22.
//

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>
#include <time.h>
#define RSIGN   72
#define REXEC   45
#define RFormName "RobotomyRequestForm"

RobotomyRequestForm::RobotomyRequestForm() : Form() {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &src){
	*this = src;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
		: Form(RFormName, target, RSIGN, REXEC) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &src) {
	Form::setName(src.getName());
	Form::setIsSigned(src.getIsSigned());
	Form::setSignGrade(src.getSignGrade());
	Form::setExecuteGrade(src.getExecuteGrade());
	Form::setTarget(src.getTarget());
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat &src) const {
	if (!Form::getIsSigned())
		throw Form::NotSignedException();
	if (src.getGrade() > Form::getExecuteGrade())
		throw Form::GradeTooLowException();
	srand(time(NULL));
	int res = rand() % 2;
	std::cout << src.getName() + " executed " + Form::getName() << std::endl;
	std::cout << "ZZZZZZZZZZZZKKKKKK!!!!!!!!!!!ZZZZZZIIIIIII.." << std::endl;
	std::cout << (res ? Form::getTarget() + " has been robotomized successfully!!" : Form::getTarget() + " robotomizing failed") << std::endl;
}
