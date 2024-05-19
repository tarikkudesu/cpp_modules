#include "Point.hpp"

Point::Point() : __x(0), __y(0) {

}

Point::Point( float const x, float const y ) : __x(x), __y(y) {
	
}

Point::Point( Point const &src ) : __x(src.__x), __y(src.__y) {

}

Point::~Point() {
	
}

Point	&Point::operator=( Point const &rhs ) {
	if (this != &rhs) {
		Fixed &tmp1 = const_cast<Fixed &>(this->__x);
		Fixed &tmp2 = const_cast<Fixed &>(this->__y);
		tmp1.setRawBits(rhs.__x.toInt());
		tmp2.setRawBits(rhs.__y.toInt());
	}
	return *this;
}

Fixed	Point::getArea( Point const &a, Point const &b, Point const &c) {
	Fixed	tmp(a.__x * (b.__y - c.__y) + b.__x * (b.__y - a.__y) + c.__x * (a.__y - b.__y));
	tmp = tmp / 2;
	return tmp;
}

