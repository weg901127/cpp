#include "Span.hpp"
#include <stdlib.h>
#include <time.h>
#include <iostream>

int main() {
	std::srand(time(NULL));
	Span a(100);
	for (size_t i = 0; i < a.maxSize() / 2; i++) {
		a[i] = rand();
	}
	std::cout << a << std::endl;
	Span b;
	b = a;
	std::cout << b << std::endl;
	return 0;
}