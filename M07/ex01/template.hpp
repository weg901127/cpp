//
// Created by Giyoung Lee on 4/6/22.
//

#ifndef CPP07_EX00_TEMPLATE_HPP
#define CPP07_EX00_TEMPLATE_HPP
#include <iostream>
template<typename T1>
void iter(T1* a, unsigned int const& b, void (*f)(T1 const&)) {
for (unsigned int i = 0; i < b ; i++)
	f(a[i]);
}

template<typename T1>
void call(T1 const& a) {
		std::cout << a << std::endl;
}
template<typename T1>
void call2(T1 const& a) {
		T1& a_ = const_cast<T1&>(a);
		a_ = 1;
		std::cout << a << std::endl;
}
/*
	template<typename T1, typename T2>
	void iter(T1* a, T2 const&)
*/
#endif //CPP07_EX00_TEMPLATE_HPP
