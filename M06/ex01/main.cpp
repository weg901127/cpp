//
// Created by Giyoung Lee on 3/28/22.
//
#include "Caster.hpp"
typedef struct data {
    unsigned char x;
    unsigned int  y;
    unsigned int  z;
}Data;

static std::uintptr_t serialize(Data* ptr) {
  return (*reinterpret_cast<std::uintptr_t*>(ptr));
};

static Data* desirialize(uintptr_t raw) {
    std::uintptr_t * tmp = &raw;
    return (reinterpret_cast<Data*>(tmp));
};

int main(){
    Data *k = new Data();
    k->x = 'k';
    k->y = 1321313211;
    k->z = 1232323232;
    uintptr_t so = serialize(k);
    std::cout << so << std::endl;
    std::cout << desirialize(so)->x << std::endl;
    std::cout << desirialize(so)->y << std::endl;
    std::cout << desirialize(so)->z << std::endl;
	return 0;
}
