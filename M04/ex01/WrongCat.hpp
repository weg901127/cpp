//
// Created by Giyoung Lee on 3/25/22.
//

#ifndef CPP04_EX00_WRONGWrongCat_HPP
#define CPP04_EX00_WRONGWrongCat_HPP


#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
protected:
    std::string type;
public:
    WrongCat();
    ~WrongCat();
    WrongCat(WrongCat const& src);
    WrongCat&    operator=(WrongCat const& src);
    std::string getType() const;
    void makeSound() const;
};


#endif //CPP04_EX00_WRONGWrongCat_HPP
