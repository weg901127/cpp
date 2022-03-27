//
// Created by Giyoung Lee on 3/25/22.
//

#include "Dog.hpp"
#include "Cat.hpp"
//LEN 100 Brain.hpp

int main() {
    std::cout << "------------------------Brain Test" << std::endl;
    {
        Cat a;
        Dog b;
        Animal* arr[LEN];
        for (int i = 0; i < LEN; i++) {
            if (i < LEN/2)
                arr[i] = static_cast<Cat*>(new Cat());
            else
                arr[i] = static_cast<Dog*>(new Dog());
        }
        std::cout << "========================================Display Type" << std::endl;
        for (int i = 0; i < LEN; i++) {
            std::cout << "[" << i + 1 << "] " + arr[i]->getType() << std::endl;
        }

        std::cout << "========================================Brain Copy Test" << std::endl;
        for (int i = 0; i < LEN; i++) {
            if (i < LEN/2)
                *arr[i] = a;
            else
                *arr[i] = b;
        }
        for (int i = 0; i < LEN; i++) {
            arr[i]->makeSound();
        }
        for (int i = 0; i < LEN; i++) {
            delete arr[i];
        }
    }
    return 0;
}