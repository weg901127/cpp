//
// Created by Giyoung Lee on 3/28/22.
//
#include "Bureaucrat.hpp"
#include "Form.hpp"
int main(){
	Form a("cpp-module-05",1,100);
	Bureaucrat c("jseo", 1);
	std::cout << c << std::endl;
	Bureaucrat b("gilee",0);
	std::cout << b << std::endl;
	b.signForm(a);
	c.signForm(a);
	return 0;
}