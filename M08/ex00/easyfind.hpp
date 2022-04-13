//
// Created by gilee on 2022/04/09.
//

#ifndef CPP08_EX00_EASYFIND_HPP
#define CPP08_EX00_EASYFIND_HPP

#include <iostream>
#include <typeinfo>
template<typename T1, typename T2 >
T2& easyfind(T1& a, T2 b){
	if (std::string(typeid(*a.begin()).name()) != "i")
		throw std::exception();
	return std::find(a.begin(), a.end(), b) == a.end() ? throw std::exception() : *std::find(a.begin(), a.end(), b);
}

template<typename T1, typename T2>
const T2& easyfind(T1 const& a, T2 b){
	if (std::string(typeid(*a.begin()).name()) != "i")
		throw std::exception();
	return std::find(a.begin(), a.end(), b) == a.end() ? throw std::exception() : *std::find(a.begin(), a.end(), b);
}
/*
template<typename T1>
int& easyfind(T1& a, int b){
    for (unsigned int i = 0; i < a.size() ; i++) {
        if (a[i] == b)
            return a[i];
    }
    throw std::exception();
}
*/
/*
template<typename T1>
const int& easyfind(T1 const& a, int b){
	for (unsigned int i = 0; i < a.size() ; i++) {
		if (a[i] == b)
			return a[i];
	}
	throw std::exception();
}
 */
#endif //CPP08_EX00_EASYFIND_HPP
