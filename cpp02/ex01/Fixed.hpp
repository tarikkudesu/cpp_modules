#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	private :
		int 				__fixedPointValue;
		static const int	__fracBits;

	public :
		Fixed();
		Fixed( const int value );
		Fixed( const float value );
		Fixed( Fixed const &src );
		~Fixed();
		Fixed	&operator=( Fixed const &rhs );

		int 	getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream &operator<<( std::ostream &o, Fixed const &rhs );

#endif
