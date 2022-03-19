#include "Fixed.hpp"


using namespace std;

int main( void ) {
	Fixed a;
	Fixed c(a);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed d(b);

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
	std::cout << "------Comparison Operators-------" << std::endl;
	std::cout << "PROC  :   a > c     -->    |" << (a > c) << std::endl;
	std::cout << "PROC  :   a >= c    -->    |" << (a >= c) << std::endl;
	std::cout << "PROC  :   a < c     -->    |" << (a < c) << std::endl;
	std::cout << "PROC  :   a <= c    -->    |" << (a <= c) << std::endl;
	std::cout << "PROC  :   a == c    -->    |" << (a == c) << std::endl;
	std::cout << "PROC  :   a != c    -->    |" << (a != c) << std::endl;
	std::cout << "----------MIN, MAX TEST----------" << std::endl;
	std::cout << "PROC  :   max(a, b) -->    |" << Fixed::max( a, b ) << std::endl;
	std::cout << "PROC  :   min(a, b) -->    |" << Fixed::min( a, b ) << std::endl;
	return 0;
}
