//
// Created by Giyoung Lee on 3/30/22.
//

#include "Form.hpp"
#include "Bureaucrat.hpp"
Form::Form() :name(""),target(""),isSigned(false),signGrade(0),executeGrade(0){}

Form::~Form() {}

Form::Form(Form &src)
: name(src.name),target(src.target), isSigned(src.isSigned), signGrade(src.signGrade), executeGrade(src.executeGrade){}

Form &Form::operator=(Form &src) {
	std::string&    nameR = const_cast<std::string&>(name);
	std::string&    targetR = const_cast<std::string&>(target);
	int&    signGradeR = const_cast<int&>(signGrade);
	int&    executeGradeR = const_cast<int&>(executeGrade);
	nameR = src.getName();
	targetR = src.target;
	signGradeR = src.getSignGrade();
	executeGradeR = src.getExecuteGrade();
	isSigned = src.getIsSigned();
	return *this;
}

const std::string &Form::getName() const {
	return name;
}

const std::string &Form::getTarget() const {
	return target;
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

Form::Form(const std::string &name, const std::string &target, const int signGrade, const int executeGrade)
: name(name), target(target), signGrade(signGrade), executeGrade(executeGrade){
	isSigned = false;
}

void Form::setName(const std::string &sname) {
	std::string& nameR = const_cast<std::string&>(name);
	nameR = sname;
}

void Form::setIsSigned(bool sisSigned) {
	isSigned = sisSigned;
}

void Form::setSignGrade(const int ssignGrade) {
	int& signGradeR = const_cast<int&>(signGrade);
	signGradeR = ssignGrade;
}

void Form::setExecuteGrade(const int sexecuteGrade) {
	int& executeGrageR = const_cast<int&>(executeGrade);
	executeGrageR = sexecuteGrade;
}

void Form::setTarget(const std::string &starget) {
	std::string& targetR = const_cast<std::string&>(target);
	targetR = starget;
}

void Form::beSigned(Bureaucrat &src) {
	if (src.getGrade() > getSignGrade()) throw GradeTooLowException();
	setIsSigned(true);
}

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

const char *Form::NotSignedException::what() const throw() {
	return "Form::NotSignedException";
}
