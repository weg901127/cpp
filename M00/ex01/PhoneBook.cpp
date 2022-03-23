#include "PhoneBook.hpp"


PhoneBook::PhoneBook() {
    std::fill_n(firstname, MAX, "");
    std::fill_n(lastname, MAX, "");
    std::fill_n(nickname, MAX, "");
    std::fill_n(phonenumber, MAX, "");
    std::fill_n(secret, MAX, "");
}

std::string& PhoneBook::getFirstname(int index) {
    return firstname[index];
}

std::string& PhoneBook::getLastname(int index){
    return lastname[index];
}

std::string& PhoneBook::getNickname(int index){
    return nickname[index];
}

std::string& PhoneBook::getPhonenumber(int index){
    return phonenumber[index];
}

std::string& PhoneBook::getSecret(int index){
    return secret[index];
}
