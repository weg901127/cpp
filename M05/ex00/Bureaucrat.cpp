//
// Created by Giyoung Lee on 3/28/22.
//

#include "Bureaucrat.hpp"
#include "GradeTooLowException.hpp"
#include "GradeTooHighException.hpp"

Bureaucrat::Bureaucrat() : grade(150/2) {}

Bureaucrat::Bureaucrat(const std::string &name) : name(name), grade(150/2) {}

Bureaucrat::~Bureaucrat() {}

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
		if (grade - 1 < HIGH) throw GradeTooHighException();
		else
			--grade;
	} catch (std::exception& e){
		std::cout << e << std::endl;
	}
}

void Bureaucrat::decrease() {
	try {
		if (grade + 1 > LOW) throw GradeTooLowException();
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


