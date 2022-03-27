//
// Created by Giyoung Lee on 3/26/22.
//

#include "Brain.hpp"

const std::string *Brain::getIdeas() const {
    return ideas;
}

Brain::Brain() {
    std::cout << "Brain!" << std::endl;
}

Brain::~Brain() {
    std::cout << "Delete Brain!" << std::endl;
}

Brain::Brain(Brain &src) {
    *this = src;
}

Brain& Brain::operator=(Brain& src) {
    std::cout << "Copy Brain!" << std::endl;
    for (int i = 0; i < LEN; i++) {
        this->ideas[i] = src.ideas[i].substr(0);
    }
    return *this;
}

void Brain::setIdeas(char c) {
    for (int i = 0; i < LEN; i++) {
        ideas[i] = c;
    }
}
