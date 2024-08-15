#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
	private :
		const unsigned int	N;
		vector<int>			inventory;

	public:
		Span( const unsigned int n );
		Span( const Span &copy );
		Span	&operator=( const Span &assign );
		~Span();
};

#endif
