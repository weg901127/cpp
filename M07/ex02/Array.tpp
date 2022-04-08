//
// Created by Giyoung Lee on 4/6/22.
//

#ifndef CPP07_EX02_ARRAY_TPP
#define CPP07_EX02_ARRAY_TPP

#include "Array.hpp"
#include <iostream>

template<class T>
Array<T>::Array() : n(T()), arr(new T[0]()){
}

template<class T>
Array<T>::Array(unsigned int n) : n(n), arr(new T[n]()){
	std::cout << *this << std::endl;
}

template<class T>
Array<T>::~Array<T>() {
	delete []arr;
}

template<class T>
Array<T> &Array<T>::operator=(Array<T> &src) {
	n = src.n;
	if (arr != NULL)
		delete []arr;
	arr = new T[n]();
	for (unsigned int i = 0; i < n; i++) {
		arr[i] = src.arr[i];
	}
	return *this;
}

template<class T>
T *Array<T>::getArr() const {
	return arr;
}

template<class T>
unsigned int Array<T>::size() const {
	return n;
}

template<class T>
Array<T>::Array(Array &src) : n(0) , arr(new T[n]()) {
	*this = src;
}

template<class T>
T &Array<T>::operator[](unsigned int i) {
	//std::cout << i << ":" << (n - 1) << std::endl;
		if (i > n - 1) {
			throw std::exception();
		}
	return this->arr[i];
}

template<class T>
std::ostream &operator<<(std::ostream &os, const Array<T> &array) {
	std::cout << "index :\t\t";
	for (unsigned int i = 0; i < array.size(); i++) {
		std::cout << i << "|\t\t";
	}
	std::cout << std::endl;
	std::cout << "value :\t\t";
	for (unsigned int i = 0; i < array.size(); i++) {
		std::cout << array.getArr()[i] << "|\t\t";
	}
	return os;
}

#endif //CPP07_EX02_ARRAY_TPP
