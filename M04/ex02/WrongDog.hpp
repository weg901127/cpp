//
// Created by Giyoung Lee on 3/25/22.
//

#ifndef CPP04_EX00_WRONGWrongDog_HPP
#define CPP04_EX00_WRONGWrongDog_HPP


#include <iostream>
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal{
protected:
    std::string type;
public:
    WrongDog();
    ~WrongDog();
    WrongDog(WrongDog const& src);
    WrongDog&    operator=(WrongDog const& src);
    std::string getType() const;
    void makeSound() const;
};



#endif //CPP04_EX00_WRONGWrongDog_HPP
