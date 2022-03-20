#include "bsp.cpp"


int main( void ) {
	Point	a_(2, 4);
	Point	b_(4, 2);
	Point	c_(4, 4);
	Point	t_(3, 3.5);
	std::cout << bsp(a_, b_, c_, t_) << std::endl;
	Point	a(2, 2);
	Point	b(2, 2);
	Point	c(7, 9);
	Point	t(3, 2);
	std::cout << bsp(a, b, c, t) << std::endl;

	/*
	std::cout << "------Arithmetix Operators------" << std::endl;
	std::cout << "EVAL  :   a + d     -->    |" << a + d << std::endl;
	std::cout << "EVAL  :   a - d     -->    |" << a - d << std::endl;
	std::cout << "EVAL  :   a * d     -->    |" << a * d << std::endl;
	std::cout << "EVAL  :   a / d     -->    |" << a / d << std::endl;
	std::cout << "EVAL  :   d = d + d -->    |" << (d = d + d) << std::endl;
	std::cout << "------PRE, POST Operators-------" << std::endl;
	std::cout << "EVAL  :   a         -->    |" << a << std::endl;
	std::cout << "PROC  :   PRE+      -->    |" << ++a << std::endl;
	std::cout << "EVAL  :   a         -->    |" << a << std::endl;
	std::cout << "PROC  :   POST+     -->    |" << a++ << std::endl;
	std::cout << "EVAL  :   a         -->    |" << a << std::endl;
	std::cout << "PROC  :   PRE-      -->    |" << --a << std::endl;
	std::cout << "EVAL  :   a         -->    |" << a << std::endl;
	std::cout << "PROC  :   POST-     -->    |" << a-- << std::endl;
	std::cout << "EVAL  :   a         -->    |" << a << std::endl;
	std::cout << "PROC  :   d == b    -->    |" << (d == b) << std::endl;
	std::cout << "PROC  :   PRE+      -->    |" << ++d << std::endl;
	std::cout << "EVAL  :   d         -->    |" << d << std::endl;
	std::cout << "PROC  :   POST+     -->    |" << d++ << std::endl;
	std::cout << "EVAL  :   d         -->    |" << d << std::endl;
	std::cout << "PROC  :   PRE-      -->    |" << --d << std::endl;
	std::cout << "EVAL  :   d         -->    |" << d << std::endl;
	std::cout << "PROC  :   POST-     -->    |" << d-- << std::endl;
	std::cout << "EVAL  :   d         -->    |" << d << std::endl;
	return 0;
	*/
}
