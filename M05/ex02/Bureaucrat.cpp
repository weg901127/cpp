//
// Created by Giyoung Lee on 3/28/22.
//

#include "Bureaucrat.hpp"

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
		if (grade - 1 < HIGH) throw Bureaucrat::GradeTooHighException();
		else
			--grade;
	} catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::decrease() {
	try {
		if (grade + 1 > LOW) throw Bureaucrat::GradeTooLowException();
		else
			++grade;
	} catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
}

const std::string &Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name){
	try {
		if (grade > LOW) throw Bureaucrat::GradeTooLowException();
		else if (grade < HIGH) throw Bureaucrat::GradeTooHighException();
	} catch (std::exception& e){
		std::cout << e.what() << std::endl;
		this->grade = LOW/2;
		return;
	}
	this->grade = grade;
}

void Bureaucrat::signForm(Form &src) {
	try {
		src.beSigned(*this);
		std::cout << this->name + " signed " + src.getName() << std::endl;
	} catch (std::exception& e){
		std::cout << this->name + " couldn't sign " + src.getName() + " because " + e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(const Form &form) {
	try {
		form.execute(*this);
		std::cout << this->name + " executed " + form.getName() << std::endl;
	} catch (std::exception& e){
		std::cout << this->name + " couldn't execute " + form.getName() + " because " + e.what() << std::endl;
	}
}


const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Bureaucrat::GradeTooHighException";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Bureaucrat::GradeTooLowException";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat& src) {
    std::cout << src.getName() + ", bureaucrat grade " << src.getGrade();
    return out;
}
