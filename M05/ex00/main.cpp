//
// Created by Giyoung Lee on 3/28/22.
//
#include "Bureaucrat.hpp"
int main(){
	Bureaucrat a("test");
	Bureaucrat b;
	b = a;
	std::cout << a.getName() + " "<< a.getGrade() << std::endl;
	std::cout << b.getName() + " "<< b.getGrade() << std::endl;
	for (int i = 0; i < 100; ++i) {
		b.decrease();
	}
	for (int i = 0; i < 100; ++i) {
		a.increase();
	}
	return 0;
}