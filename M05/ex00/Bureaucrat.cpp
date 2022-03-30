//
// Created by Giyoung Lee on 3/28/22.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : grade(150/2) {}

Bureaucrat::Bureaucrat(const std::string &name) : name(name), grade(150/2) {}

Bureaucrat::~Bureaucrat() throw(){}

Bureaucrat::Bureaucrat(Bureaucrat &src) {
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &src) {
	std::string&    namer = const_cast<std::string&>(name);
	namer = src.name;
	grade = src.grade;
	return *this;
}

void Bureaucrat::increase() {
	try {
		if (grade - 1 < HIGH) throw Bureaucrat::GradeTooHighException();
		else
			--grade;
	} catch (std::exception& e){
		std::cout << e << std::endl;
	}
}

void Bureaucrat::decrease() {
	try {
		if (grade + 1 > LOW) throw Bureaucrat::GradeTooLowException();
		else
			++grade;
	} catch (std::exception& e){
		std::cout << e << std::endl;
	}
}

const std::string &Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}


const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "GradeTooHighException";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "GradeTooLowException";
}

std::ostream &operator<<(std::ostream &out, const std::exception &src) {
    std::cout << src.what();
    return out;
}
