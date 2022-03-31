//
// Created by Giyoung Lee on 3/28/22.
//
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main(){
	{
		std::cout << "========================================Form1" << std::endl;
		ShrubberyCreationForm a("NiceForm");
		Bureaucrat c("gilee2", 100);
		std::cout << c << std::endl;
		Bureaucrat b("gilee", 3);
		std::cout << b << std::endl;
		b.executeForm(a);
		b.signForm(a);
		b.executeForm(a);
		c.signForm(a);
		c.executeForm(a);
	}
	{
		std::cout << "========================================Form2" << std::endl;
		RobotomyRequestForm a("NiceForm");
		Bureaucrat c("gilee2", 100);
		std::cout << c << std::endl;
		Bureaucrat b("gilee", 3);
		std::cout << b << std::endl;
		b.executeForm(a);
		b.signForm(a);
		b.executeForm(a);
		c.signForm(a);
		c.executeForm(a);
	}
	{
		std::cout << "========================================Form3" << std::endl;
		PresidentialPardonForm a("NiceForm");
		Bureaucrat c("gilee2", 100);
		std::cout << c << std::endl;
		Bureaucrat b("gilee", 3);
		std::cout << b << std::endl;
		b.executeForm(a);
		b.signForm(a);
		b.executeForm(a);
		c.signForm(a);
		c.executeForm(a);
	}
	return 0;
}