//
// Created by Giyoung Lee on 4/6/22.
//

#ifndef CPP07_EX00_TEMPLATE_HPP
#define CPP07_EX00_TEMPLATE_HPP
template<typename T>
void swap(T &a, T &b) {
	T tmp = b;
	b = a;
	a = tmp;
}
template<typename T>
T min(T &a, T &b) {
	return b > a ? a : b;
}
template<typename T>
T max(T &a, T &b) {
	return b < a ? a : b;
}
#endif //CPP07_EX00_TEMPLATE_HPP
