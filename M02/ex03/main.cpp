#include "bsp.cpp"


int main( void ) {
	Point	a_(1, 1);
	Point	b_(3, 1);
	Point	c_(1, 3);
	Point	t_(2.124214f, 2.9345834812f);
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
