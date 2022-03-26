//
// Created by Giyoung Lee on 3/25/22.
//

#ifndef CPP04_EX00_WRONGANIMAL_HPP
#define CPP04_EX00_WRONGANIMAL_HPP


#include <iostream>

class WrongAnimal {
protected:
    std::string type;
public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(WrongAnimal const& src);
    WrongAnimal&    operator=(WrongAnimal const& src);

    void makeSound() const;
    std::string getType() const;
    void setType(std::string const& src);
};


#endif //CPP04_EX00_WRONGANIMAL_HPP
