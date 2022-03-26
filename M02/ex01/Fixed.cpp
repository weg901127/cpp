#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed():fvalue(0){
	std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(const Fixed &src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}
Fixed& Fixed::operator=(const Fixed& src){
	std::cout << "Assignation operator called" << std::endl;
	fvalue = src.getRawBits();
	return	*this;
}

std::ostream&	operator<<(std::ostream& out, const Fixed& src) {
	std::cout << src.toFloat() ;
	return out;
}

int Fixed::getRawBits( void ) const{
	return this->fvalue;
}

void	Fixed::setRawBits( int const raw ){
	this->fvalue = raw;
}

Fixed::Fixed(const int input) {
	std::cout << "Int constructor called" << std::endl;
	this->fvalue = input << this->frac;
}

Fixed::Fixed(const float input) {
	std::cout << "Float constructor called" << std::endl;
	this->fvalue = roundf(input * (float)(1 << this->frac));
}

float	Fixed::toFloat( void ) const {
	return this->fvalue / (float)(1 << this->frac);
}
int		Fixed::toInt( void ) const {

	return this->fvalue >> 8;
}
