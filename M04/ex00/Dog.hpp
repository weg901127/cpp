//
// Created by Giyoung Lee on 3/25/22.
//

#ifndef CPP03_EX03_DOG_HPP
#define CPP03_EX03_DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal{
protected:
    std::string type;
public:
    Dog();
    ~Dog();
    Dog(Dog const& src);
    Dog&    operator=(Dog const& src);
    std::string getType() const;
    void makeSound() const;
};


#endif //CPP03_EX03_DOG_HPP
