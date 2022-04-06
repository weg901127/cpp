//
// Created by Giyoung Lee on 4/6/22.
//

#ifndef CPP07_EX00_TEMPLATE_HPP
#define CPP07_EX00_TEMPLATE_HPP

#include <ostream>

template<class T>
class Array {
private:
	T*  arr;
	unsigned int n;
public:
	Array();
	~Array();
	Array(unsigned int n);
	Array(Array& src);
	Array& operator=(Array& src);
};
template<class T>
std::ostream &operator<<(std::ostream &os, const Array<T> &array);
#endif //CPP07_EX00_TEMPLATE_HPP
