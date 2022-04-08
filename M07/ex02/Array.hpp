//
// Created by Giyoung Lee on 4/6/22.
//

#ifndef CPP07_EX00_TEMPLATE_HPP
#define CPP07_EX00_TEMPLATE_HPP

#include <ostream>

template<class T>
class Array {
private:
	unsigned int n;
	T*  arr;
public:
	Array();
	~Array();
	Array(unsigned int n);
	Array(Array& src);
	Array& operator=(Array& src);
	T&  operator[](unsigned int n);

	unsigned int size() const;
	T *getArr() const;
};
template<class T>
std::ostream &operator<<(std::ostream &os, const Array<T> &array);
#endif //CPP07_EX00_TEMPLATE_HPP
