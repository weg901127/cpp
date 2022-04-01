//
// Created by Giyoung Lee on 3/28/22.
//
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(){
	{
		std::cout << "========================================Form1" << std::endl;
		Intern someRandomIntern;
		Form *rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		Bureaucrat c("gilee2", 100);
		std::cout << c << std::endl;
		Bureaucrat b("gilee", 3);
		std::cout << b << std::endl;
		b.signForm(*rrf);
		b.executeForm(*rrf);
		c.signForm(*rrf);
		c.executeForm(*rrf);
		delete rrf;
	}
	{
		std::cout << "========================================Form2" << std::endl;
		Intern someRandomIntern;
		Form *rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		Bureaucrat c("gilee2", 100);
		std::cout << c << std::endl;
		Bureaucrat b("gilee", 3);
		std::cout << b << std::endl;
		b.signForm(*rrf);
		b.executeForm(*rrf);
		c.signForm(*rrf);
		c.executeForm(*rrf);
		delete rrf;
	}
	{
		std::cout << "========================================Form3" << std::endl;
		Intern someRandomIntern;
		Form *rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		Bureaucrat c("gilee2", 100);
		std::cout << c << std::endl;
		Bureaucrat b("gilee", 3);
		std::cout << b << std::endl;
		b.signForm(*rrf);
		b.executeForm(*rrf);
		c.signForm(*rrf);
		c.executeForm(*rrf);
		delete rrf;
	}
	{
		std::cout << "========================================FormBlank" << std::endl;
		Intern someRandomIntern;
		Form *rrf;
		rrf = someRandomIntern.makeForm("", "Bender");
		if (rrf == NULL)
			return 1;
		Bureaucrat c("gilee2", 100);
		std::cout << c << std::endl;
		Bureaucrat b("gilee", 3);
		std::cout << b << std::endl;
		b.signForm(*rrf);
		b.executeForm(*rrf);
		c.signForm(*rrf);
		c.executeForm(*rrf);
		delete rrf;
	}
	return 0;
}