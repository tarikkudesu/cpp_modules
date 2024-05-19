#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private :
		int 				__fixedPointValue;
		static const int	__fracBits;

	public :
		Fixed();
		Fixed( Fixed const &src );
		~Fixed();
		Fixed	&operator=( Fixed const &rhs );

		int 	getRawBits( void ) const;
		void	setRawBits( int const raw );
		void	p( void ) {
			std::cout << __fracBits << std::endl;
		}
};

#endif
