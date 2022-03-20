#include <iostream>
#include "Point.hpp"

static bool	validYPoint(Point A, Point B, Point T)
{
	return (Fixed::max(A.gety(), B.gety()) > T.gety()
			&& Fixed::min(A.gety(), B.gety()) < T.gety());
}

static int	validHit(Point A, Point B, Point T) {
	return (validYPoint(A, B, T) && (A.getx().toFloat() - B.getx().toFloat() != 0) && (A.gety().toFloat() - B.gety().toFloat()) != 0);
}

bool		bsp(Point a, Point b, Point c, Point t)
{
	int	hit = 0;
	if (a == b || b == c || c == a)
		goto err;
	hit += validHit(a, b, t);
	hit += validHit(b, c, t);
	hit += validHit(c, a, t);
	return hit & 1;
err:
	std::cerr << "It's not triangle" << std::endl;
	exit(1);
}
