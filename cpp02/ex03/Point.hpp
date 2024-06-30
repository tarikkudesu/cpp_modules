#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <cmath>
# include "Fixed.hpp"

class	Point
{
	private :
		const Fixed	__x;
		const Fixed	__y;

	public :	
		Point();
		Point( float const x, float const y );
		Point( Point const &src );
		~Point();
		Point	&operator=( Point const &rhs );

		static Fixed	getArea( Point const &a, Point const &b, Point const &c);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
