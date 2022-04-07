//
// Created by Giyoung Lee on 3/28/22.
//
#include <iostream>
#include "Data.h"

static std::uintptr_t serialize(Data* ptr) {
  return (*reinterpret_cast<std::uintptr_t*>(ptr));
};

static Data* desirialize(uintptr_t raw) {
    std::uintptr_t * tmp = &raw;
    return (reinterpret_cast<Data*>(tmp));
};

int main(){
    Data *k = new Data();
    k->x = 12;
    k->y = 13;
    k->z = 14;
    uintptr_t so = serialize(k);
    std::cout << (int)desirialize(so)->x << std::endl;
    std::cout << (int)desirialize(so)->y << std::endl;
    std::cout << (int)desirialize(so)->z << std::endl;
	delete k;
	return 0;
}
