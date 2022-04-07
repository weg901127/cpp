//
// Created by Giyoung Lee on 3/28/22.
//
#include <iostream>
#include "template.hpp"

int main(){
	{
		std::cout << "swap test 1 ======================================" << std::endl;
		const int a = 3;
		const int b = 4;
		const int *c = &a;
		const int *d = &b;
		std::cout << "a : " << a << ", b : " << b << std::endl;
		::swap(a, b);
		std::cout << "a : " << a << ", b : " << b << std::endl;
		std::cout << "c : " << *c << ", d : " << *d << std::endl;
		::swap(c, d);
		std::cout << "c : " << *c << ", d : " << *d << std::endl;
	}
	{
		std::cout << "swap test 2 ======================================" << std::endl;
		float a = 3.29f;
		float b = 4.29f;
		float *c = &a;
		float *d = &b;
		std::cout << "a : " << a << ", b : " << b << std::endl;
		::swap(a, b);
		std::cout << "a : " << a << ", b : " << b << std::endl;
		std::cout << "c : " << *c << ", d : " << *d << std::endl;
		::swap(c, d);
		std::cout << "c : " << *c << ", d : " << *d << std::endl;
	}
	{
		std::cout << "swap test 3 ======================================" << std::endl;
		double a = 3.19;
		double b = 4.19;
		double *c = &a;
		double *d = &b;
		std::cout << "a : " << a << ", b : " << b << std::endl;
		::swap(a, b);
		std::cout << "a : " << a << ", b : " << b << std::endl;
		std::cout << "c : " << *c << ", d : " << *d << std::endl;
		::swap(c, d);
		std::cout << "c : " << *c << ", d : " << *d << std::endl;
	}
	{
		std::cout << "swap test 4 ======================================" << std::endl;
		const std::string a = "a";
		const std::string b = "b";
		const std::string &c = a;
		const std::string &d = b;
		std::cout << "a : " << a << ", b : " << b << std::endl;
		::swap(a, b);
		std::cout << "a : " << a << ", b : " << b << std::endl;
		std::cout << "c : " << c << ", d : " << d << std::endl;
		::swap(c, d);
		std::cout << "c : " << c << ", d : " << d << std::endl;
	}
	{
		std::cout << "swap test 5 ======================================" << std::endl;
		char a = 'a';
		char b = 'b';
		char *c = &a;
		char *d = &b;
		std::cout << "a : " << a << ", b : " << b << std::endl;
		::swap(a, b);
		std::cout << "a : " << a << ", b : " << b << std::endl;
		std::cout << "c : " << *c << ", d : " << *d << std::endl;
		::swap(c, d);
		std::cout << "c : " << *c << ", d : " << *d << std::endl;
	}
	{
		std::cout << "min max test 1 ======================================" << std::endl;
		int a = 3;
		int b = 4;
		std::cout << "min(3, 4) : " << ::min(a, b) << ", max(3, 4) : " << ::max(a, b) << std::endl;
	}
	{
		std::cout << "min max test 2 ======================================" << std::endl;
		float a = 3.14f;
		float b = 4.14f;
		std::cout << "min(3.14f, 4.14f) : " << ::min(a, b) << ", max(3.14f, 4.14f) : " << ::max(a, b) << std::endl;
	}
	{
		std::cout << "min max test 3 ======================================" << std::endl;
		double a = 3.19;
		double b = 4.19;
		std::cout << "min(3.19, 4.19) : " << ::min(a, b) << ", max(3.19, 4.19) : " << ::max(a, b) << std::endl;
	}
	{
		std::cout << "min max test 4 ======================================" << std::endl;
		const std::string a = "Hello";
		const std::string b = "World";
		std::cout << "min(\"a\", \"b\") : " << ::min(a, b) << ", max(\"a\", \"b\") : " << ::max(a, b) << std::endl;
	}
	{
		std::cout << "min max test 5 ======================================" << std::endl;
		char a = 'H';
		char b = 'W';
		std::cout << "min(\"a\", \"b\") : " << ::min(a, b) << ", max(\"a\", \"b\") : " << ::max(a, b) << std::endl;
	}
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
