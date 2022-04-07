//
// Created by Giyoung Lee on 4/6/22.
//

#ifndef CPP07_EX00_TEMPLATE_HPP
#define CPP07_EX00_TEMPLATE_HPP
template<typename T>
void swap(T const& a, T const& b) {
	T& a_ = const_cast<T&>(a);
	T& b_ = const_cast<T&>(b);
	T tmp = b_;
	b_ = a_;
	a_ = tmp;
}
template<typename T>
T min(T const& a, T const& b) {
	return b > a ? a : b;
}
template<typename T>
T max(T const& a, T const& b) {
	return b < a ? a : b;
}
#endif //CPP07_EX00_TEMPLATE_HPP
