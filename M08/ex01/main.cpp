#include "Span.hpp"
#include <iostream>
int main() {
	{
		std::srand(time(NULL));
		Span a(1000);
		a.complete();
		std::cout << a << std::endl;
		Span b(3);
		b.addNumber(1);
		b.addNumber(1);
		b.addNumber(-1);
		std::cout << b << std::endl;
	}
	{
		Span sp = Span(5);

		sp.complete();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	return 0;
}