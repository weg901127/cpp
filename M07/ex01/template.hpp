//
// Created by Giyoung Lee on 4/6/22.
//

#ifndef CPP07_EX00_TEMPLATE_HPP
#define CPP07_EX00_TEMPLATE_HPP

template<typename T1, typename T2>
void iter(T1 const& a, T2 const b, void (*f)(T1 const& , const T2)) {
	f(a, b);
}

template<typename T1, typename T2>
void call(T1 const& a, T2 const b) {
	for (T2 i = 0; i < b; i++) {
		std::cout << a[i] << std::endl;
	}
}

#endif //CPP07_EX00_TEMPLATE_HPP
