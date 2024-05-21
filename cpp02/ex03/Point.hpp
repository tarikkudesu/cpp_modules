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
		~Point();
		Point( float const x, float const y );
		Point( Point const &p1, Point const &p2 );
		Point( Point const &src );
		Point	&operator=( Point const &rhs );
		void	Display( void ) const;

		static Fixed	getArea( Point const &a, Point const &b, Point const &c);
		static Fixed	getDotProduct( Point const &a, Point const &b );
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
