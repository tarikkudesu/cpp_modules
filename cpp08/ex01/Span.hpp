#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
	private :

	public:
		unsigned int		N;
		std::vector<int>	inventory;

		Span( );
		Span( const unsigned int n );
		Span( const Span &copy );
		Span	&operator=( const Span &assign );
		~Span();

		void	addNumber( int nbr );

		class	fullContainer : public std::exception { public : virtual const char *what( void ) const throw(); };
		class	emptyContainer : public std::exception { public : virtual const char *what( void ) const throw(); };
};

#endif
