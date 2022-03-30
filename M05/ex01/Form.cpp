//
// Created by Giyoung Lee on 3/30/22.
//

#include "Form.hpp"
#include "Bureaucrat.hpp"
Form::Form() :name(""),isSigned(false),signGrade(0),executeGrade(0){}

Form::~Form() {}

Form::Form(Form &src) : name(src.name), isSigned(src.isSigned), signGrade(src.signGrade), executeGrade(src.executeGrade){}

Form &Form::operator=(Form &src) {
	std::string&    nameR = const_cast<std::string&>(name);
	int&    signGradeR = const_cast<int&>(signGrade);
	int&    executeGradeR = const_cast<int&>(executeGrade);
	nameR = src.name;
	signGradeR = src.signGrade;
	executeGradeR = src.executeGrade;
	isSigned = src.isSigned;
	return *this;
}

const std::string &Form::getName() const {
	return name;
}

bool Form::getIsSigned() const {
	return isSigned;
}

int Form::getSignGrade() const {
	return signGrade;
}

int Form::getExecuteGrade() const {
	return executeGrade;
}

void Form::beSigned(Bureaucrat &src) {
	if (src.getGrade() > signGrade) throw Form::GradeTooLowException();
	this->isSigned = 1;
}

Form::Form(const std::string &name, const int signGrade, const int executeGrade) : name(name),
signGrade(signGrade), executeGrade(executeGrade){}

const char *Form::GradeTooHighException::what() const throw() {
	return "Form::GradeTooHighException";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Form::GradeTooLowException";
}

std::ostream &operator<<(std::ostream &out, const Form &src) {
	std::cout << "- FormName\t\t\t\t: " + src.getName() + "\n- IsSigned\t\t\t\t: " << (src.getIsSigned() ? "True" : "False") << + "\n- Grade(sign, execute)\t: ("
	<< src.getSignGrade() << ", " << src.getExecuteGrade() << ")";
	return out;
}
