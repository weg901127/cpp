//
// Created by Giyoung Lee on 4/11/22.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Span.hpp"
Span::Span() : num(0){
	span.LONG_SPAN = 0;
	span.SHORT_SPAN = INT_MAX;
    span.sign[0] = 1;
    span.sign[1] = -1;
}

Span::~Span() {}

Span::Span(unsigned int N) {
	span.LONG_SPAN = 0;
	span.SHORT_SPAN = INT_MAX;
    span.sign[0] = 1;
    span.sign[1] = -1;
	num.reserve(N);
}

Span::Span(Span const& src) {
	*this = src;
}

Span &Span::operator=(Span const& src) {
	this->span = src.span;
	this->num = src.num;
	return *this;
}

int const &Span::operator[](unsigned int index) const {
	if (index > num.size() - 1)
		throw std::exception();
	return this->num[index];
}

unsigned int Span::size() const{
	return num.size();
}

void Span::addNumber(int value) {
	if (this->num.size() == num.capacity())
		throw std::exception();
	num.push_back(value);
	if (num.size() != 0 && num.size() != 1){
		for (size_t i = 0; i < num.size() - 1; i++) {
            if (this->num[i] < 0 && num[num.size() - 1] > 0 && (this->num[num.size() - 1] - this->num[i]) < this->span.SHORT_SPAN)
                this->span.SHORT_SPAN = this->num[num.size() - 1] - this->num[i];
            else if (this->num[i] > 0 && num[num.size() - 1] < 0 && (this->num[i] - this->num[num.size() - 1]) < this->span.SHORT_SPAN)
                this->span.SHORT_SPAN = this->num[i] - this->num[num.size() - 1];
            else if (std::abs((this->num[i] - this->num[num.size() - 1])) < this->span.SHORT_SPAN)
                this->span.SHORT_SPAN = std::abs(this->num[i] - this->num[num.size() - 1]);
		}
	}
    std::sort(num.begin(), num.end());
    std::vector<int>::iterator eit = --num.end();
    std::vector<int>::iterator it = num.begin();
    this->span.LONG_SPAN = (unsigned int)(*eit - *it);
	if (num.size() == 2)
		span.SHORT_SPAN = span.LONG_SPAN;
}

unsigned int Span::maxSize() const {
	return num.capacity();
}

int Span::shortestSpan() const{
	if (num.size() < 2)
		throw std::exception();
	return this->span.SHORT_SPAN;
}

int Span::longestSpan() const{
	if (num.size() < 2)
		throw std::exception();
	return this->span.LONG_SPAN;
}

void Span::complete() {
	std::srand(time(NULL));
	for (std::vector<int>::iterator first = num.begin(); num.size() != num.capacity(); ++first) {
		addNumber((rand() % 1000000)*(span.sign[rand() % 2]));
	}
}

std::ostream &operator<<(std::ostream &os, const Span &span) {
	for (unsigned int i = 0; i < span.maxSize(); i++) {
		std::cout << span[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "LONGEST SPAN : " << span.longestSpan() << std::endl;
	std::cout << "SHORTEST SPAN : " << span.shortestSpan();
	return os;
}
