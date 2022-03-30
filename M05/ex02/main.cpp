//
// Created by Giyoung Lee on 3/28/22.
//
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
int main(){
	ShrubberyCreationForm a("SEX");
	Bureaucrat c("jseo", 1);
	std::cout << c << std::endl;
	Bureaucrat b("gilee",0);
	std::cout << b << std::endl;
	b.executeForm(a);
	b.signForm(a);
	b.executeForm(a);
	c.signForm(a);
	c.executeForm(a);
	return 0;
}