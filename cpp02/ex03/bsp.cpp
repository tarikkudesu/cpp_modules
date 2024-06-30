#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed	TotalArea(Point::getArea(a, b, c));
	Fixed	Area1(Point::getArea(a, b, point));
	Fixed	Area2(Point::getArea(b, c, point));
	Fixed	Area3(Point::getArea(c, a, point));
	std::cout << Area1 << " " << Area2 << " " << Area3 << " " << TotalArea << "\n";
	if (Area1 == 0 || Area2 == 0 || Area3 == 0)
		return false;
	if (TotalArea <= (Area1 + Area2 + Area3))
		return true;
	return false;
}