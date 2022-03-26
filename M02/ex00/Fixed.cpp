#include "Fixed.hpp"

Fixed::Fixed(): fvalue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed &src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed& Fixed::operator=(Fixed& src){
	std::cout << "Copy assignment operator called" << std::endl;
	fvalue = src.getRawBits();
	return	*this;
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fvalue;
}

void	Fixed::setRawBits( int const raw ){
	this->fvalue = raw;
}
