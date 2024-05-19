#ifndef FIXED_HPP
# define FIXED_HPP

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

		bool	operator>( Fixed const &rhs ) const;
		bool	operator<( Fixed const &rhs ) const;
		bool	operator>=( Fixed const &rhs ) const;
		bool	operator<=( Fixed const &rhs ) const;
		bool	operator==( Fixed const &rhs ) const;
		bool	operator!=( Fixed const &rhs ) const;
		Fixed	operator+( Fixed const &rhs ) const;
		Fixed	operator-( Fixed const &rhs ) const;
		Fixed	operator*( Fixed const &rhs ) const;
		Fixed	operator/( Fixed const &rhs ) const;
		Fixed	&operator++();
		Fixed	&operator--();
		Fixed	operator++( int );
		Fixed	operator--( int );

		int 	getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static Fixed	&min( Fixed &pt1, Fixed &pt2 );
		static const Fixed	&min( Fixed const &pt1, Fixed const &pt2 );
		static Fixed	&max( Fixed &pt1, Fixed &pt2 );
		static const Fixed	&max( Fixed const &pt1, Fixed const &pt2 );
};

std::ostream &operator<<( std::ostream &o, Fixed const &rhs );

#endif
