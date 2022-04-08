//
// Created by Giyoung Lee on 4/6/22.
//

#ifndef CPP07_EX00_TEMPLATE_HPP
#define CPP07_EX00_TEMPLATE_HPP

template<typename T1, typename T2>
void iter(T1* a, T2 const& b, void (*f)(T1* , T2 const&)) {
	f(a, b);
}

template<typename T1, typename T2>
void call(T1* a, T2 const& b) {
	for (T2 i = 0; i < b; i++) {
		std::cout << a[i] << std::endl;
	}
}
template<typename T1, typename T2>
void call2(T1* a, T2 const& b) {
	for (T2 i = 0; i < b; i++) {
		a[i] = i;
		std::cout << a[i] << std::endl;
	}
}

#endif //CPP07_EX00_TEMPLATE_HPP
