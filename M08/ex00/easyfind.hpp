//
// Created by gilee on 2022/04/09.
//

#ifndef CPP08_EX00_EASYFIND_HPP
#define CPP08_EX00_EASYFIND_HPP

#include <iostream>

template<typename T1>
int& easyfind(T1& a, int b){
    for (unsigned int i = 0; i < a.size() ; i++) {
        if (a[i] == b)
            return a[i];
    }
    throw std::exception();
}

template<typename T1>
const int& easyfind(T1 const& a, int b){
	for (unsigned int i = 0; i < a.size() ; i++) {
		if (a[i] == b)
			return a[i];
	}
	throw std::exception();
}
#endif //CPP08_EX00_EASYFIND_HPP
