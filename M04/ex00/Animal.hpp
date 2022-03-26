//
// Created by Giyoung Lee on 3/25/22.
//

#ifndef CPP04_EX00_ANIMAL_HPP
#define CPP04_EX00_ANIMAL_HPP


#include <iostream>

class Animal {
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();
    Animal(Animal const& src);
    Animal&    operator=(Animal const& src);

    virtual void makeSound() const;
    virtual std::string getType() const;
    virtual void setType(std::string const& src);
};


#endif //CPP04_EX00_ANIMAL_HPP
