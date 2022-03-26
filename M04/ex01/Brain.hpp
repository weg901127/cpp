//
// Created by Giyoung Lee on 3/26/22.
//

#ifndef CPP04_EX01_BRAIN_HPP
#define CPP04_EX01_BRAIN_HPP

#include <iostream>
#define LEN 100
class Brain {
private:
    std::string ideas[LEN];
public:
    Brain();
    ~Brain();
    Brain(Brain& src);
    Brain&  operator=(Brain& src);
    const std::string *getIdeas() const;
};


#endif //CPP04_EX01_BRAIN_HPP
