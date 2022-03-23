//
// Created by Giyoung Lee on 3/23/22.
//

#ifndef CPP01_EX02_CONTACT_HPP
#define CPP01_EX02_CONTACT_HPP
#include "PhoneBook.hpp"

class Contact {
private:
    int         count;
    PhoneBook   pb;
public:
    Contact();
    void add();
    void search();
};

#endif //CPP01_EX02_CONTACT_HPP
