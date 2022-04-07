//
// Created by Giyoung Lee on 3/28/22.
//
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "cstdlib"
#include "ctime"
static Base*   generate(void) {
	std::srand(time(NULL));
	switch (std::rand() % 3) {
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
		default:
			return new A();
	}
}

static void    identify(Base* p) {
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);
	if (a != NULL) {
		std::cout << "A" << std::endl;
	} else if (b != NULL) {
		std::cout << "B" << std::endl;
	}else if (c != NULL) {
		std::cout << "C" << std::endl;
	}
}

static void    identify(Base& p) {
	try {
		A a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	} catch (std::exception) {
		try {
			B b = dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
		} catch (std::exception) {
				C c = dynamic_cast<C &>(p);
				std::cout << "C" << std::endl;
		}
	}
}
int main(){
	Base* b = generate();
	identify(b);
	delete b;
	b = generate();
	identify(*b);
	delete b;
	return 0;
}
