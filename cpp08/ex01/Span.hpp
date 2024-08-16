#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
	private :
		unsigned int		N;
		std::vector<int>	inventory;
		long int			sS;
		long int			lS;

	public:

		Span( );
		Span( const unsigned int n );
		Span( const Span &copy );
		Span	&operator=( const Span &assign );
		~Span();

		void	fillContainer( void );
		void	addNumber( int nbr );
		long	shortestSpan( void );
		long	longestSpan( void );

		class	fullContainer : public std::exception { public : virtual const char *what( void ) const throw(); };
		class	emptyContainer : public std::exception { public : virtual const char *what( void ) const throw(); };
};

#endif
