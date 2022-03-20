#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point {
	private:
		const Fixed	x;
		const Fixed y;
	public:
		Point() : x(0), y(0){};
		Point(const float x, const float y) : x(x), y(y) {};
		Point(const Point& src) : x(src.x), y(src.y) {};
		~Point();
		const Point&	operator=(const Point& src);
		bool			operator==(const Point& src);
		const Fixed		getx() const;
		const Fixed		gety() const;
};

std::ostream&	operator<<(std::ostream& out, const Point& src);
#endif
