//
// Created by Giyoung Lee on 3/25/22.
//

#ifndef CPP03_EX03_CAT_HPP
#define CPP03_EX03_CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
protected:
    std::string type;
    Brain  &CatBrain;
public:
    Cat();
    ~Cat();
    Cat(Cat const& src);
    Cat&    operator=(Cat const& src);
    std::string getType() const;
    void makeSound() const;
};


#endif //CPP03_EX03_CAT_HPP
