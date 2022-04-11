//
// Created by gilee on 2022/04/09.
//

#ifndef CPP08_EX00_EASYFIND_HPP
#define CPP08_EX00_EASYFIND_HPP

#include <iostream>

template<typename T1>
int& easyfind(T1& a, int b){
    T1 tmp = a;
    for (unsigned int i = 0; i < a.size() ; i++) {
        if (tmp[i] == b)
            return a[i];
    }
    throw std::exception();
}
#endif //CPP08_EX00_EASYFIND_HPP
