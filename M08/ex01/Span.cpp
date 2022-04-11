//
// Created by Giyoung Lee on 4/11/22.
//

#include <iostream>
#include "Span.hpp"

Span::Span() : num(0){
	span.MAX_SIZE = 0;
	span.LONG_SPAN = 0;
	span.SORT_SPAN = 0;
}

Span::~Span() {}

Span::Span(unsigned int N) : num(N){
	span.MAX_SIZE = N;
	span.LONG_SPAN = 0;
	span.SORT_SPAN = 0;
}

Span::Span(Span const& src) : num(src.num){
	*this = src;
}

Span &Span::operator=(Span const& src) {
	this->span = src.span;
	this->num = src.num;
	return *this;
}

int &Span::operator[](unsigned int index) {
	if (index > span.MAX_SIZE)
		throw std::exception();
	return this->num[index];
}

int const &Span::operator[](unsigned int index) const {
	if (index > span.MAX_SIZE)
		throw std::exception();
	return this->num[index];
}

unsigned int Span::size() const{
	return num.size();
}

void Span::addNumber(int value) {
	if (this->size() == this->span.MAX_SIZE)
		throw std::exception();
	this->num.push_back(value);
}

unsigned int Span::maxSize() const {
	return this->span.MAX_SIZE;
}

std::ostream &operator<<(std::ostream &os, const Span &span) {
	for (unsigned int i = 0; i < span.maxSize(); i++) {
		std::cout << span[i] << " ";
	}
	return os;
}
