#include "Point.hpp"

Point::~Point() {

}

const Point&	Point::operator=(const Point& src) {
	return *this;
}
bool			Point::operator==(const Point& src) {
	return (this->getx() == src.getx() && this->gety() == src.gety());
}

const Fixed	Point::getx() const{
	return this->x;
}

const Fixed	Point::gety() const{
	return this->y;
}

std::ostream&	operator<<(std::ostream& out, const Point& src) {
	std::cout << "(" << src.getx() << ", " << src.gety() << ")";
	return out;
}
