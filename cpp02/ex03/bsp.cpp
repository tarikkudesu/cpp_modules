#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed	TotalArea(Point::getArea(a, b, c));
	Fixed	Area1(Point::getArea(a, b, point));
	Fixed	Area2(Point::getArea(b, c, point));
	Fixed	Area3(Point::getArea(c, c, point));
	if (TotalArea <= (Area1 + Area2 + Area3))
		return true;
	return false;
}