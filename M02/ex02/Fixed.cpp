#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed(){
	this->fvalue = 0;
}

Fixed::~Fixed(){
}

Fixed::Fixed(const Fixed &src){
	*this = src;
}

Fixed& Fixed::operator=(const Fixed& src){
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
	this->fvalue = input << this->frac;
}

Fixed::Fixed(const float input) {
	this->fvalue = roundf(input * (float)(1 << this->frac));
}

float	Fixed::toFloat( void ) const {
	return this->fvalue / (float)(1 << this->frac);
}

int		Fixed::toInt( void ) const {
	return this->fvalue >> 8;
}

float	Fixed::operator+(const Fixed& src) {
	Fixed tmp;
	tmp.fvalue = ((this->toFloat() + src.toFloat()) * (float)(1 << this->frac));
	return tmp.toFloat();
}

Fixed&	Fixed::operator++() {
	this->fvalue = (this->toFloat() + (1 / (float)(1 << this->frac))) * (float)(1 << this->frac);
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed tmp(*this);
	this->fvalue = (this->toFloat() + (1 / (float)(1 << this->frac))) * (float)(1 << this->frac);
	return tmp;
}

float	Fixed::operator-(const Fixed& src) {
	Fixed tmp;
	tmp.fvalue = ((this->toFloat() - src.toFloat()) * (float)(1 << this->frac));
	return tmp.toFloat();
}

Fixed&	Fixed::operator--() {
	this->fvalue = (this->toFloat() - (1 / (float)(1 << this->frac))) * (float)(1 << this->frac);
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed tmp(*this);
	this->fvalue = (this->toFloat() - (1 / (float)(1 << this->frac))) * (float)(1 << this->frac);
	return tmp;
}

float	Fixed::operator*(const Fixed& src) {
	Fixed tmp;
	tmp.fvalue = ((this->toFloat() * src.toFloat()) * (float)(1 << this->frac));
	return tmp.toFloat();
}

float	Fixed::operator/(const Fixed& src) {
	Fixed tmp;
	tmp.fvalue = ((this->toFloat() / src.toFloat()) * (float)(1 << this->frac));
	return tmp.toFloat();
}

bool	Fixed::operator>(const Fixed& src) const{
	return	(this->toFloat() > src.toFloat());
}

bool	Fixed::operator>=(const Fixed& src) const{
	return	(this->toFloat() >= src.toFloat());
}

bool	Fixed::operator<(const Fixed& src) const{
	return	(this->toFloat() < src.toFloat());
}

bool	Fixed::operator<=(const Fixed& src) const{
	return	(this->toFloat() <= src.toFloat());
}

bool	Fixed::operator==(const Fixed& src) const{
	return	(this->toFloat() == src.toFloat());
}

bool	Fixed::operator!=(const Fixed& src) const{
	return	(this->toFloat() != src.toFloat());
}

Fixed&	Fixed::min(Fixed& a, Fixed& b) {
	return (a > b ? b : a);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b) {
	return (a < b ? b : a);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b) {
	return (a > b ? b : a);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b) {
	return (a < b ? b : a);
}
