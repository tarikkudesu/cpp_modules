#include "Span.hpp"

Span::Span( const unsigned int n ) : N( n ) {
	// std::cout << "Span Default constructor called" << std::endl;
}

Span::Span( const Span &copy ) : N( copy.N ) {
	// std::cout << "Span copy constructor called" << std::endl;
	(void) copy;
}

Span::~Span() {
	// std::cout << "Span Desctructor called" << std::endl;
}

Span	&Span::operator=( const Span &assign ) {
	// std::cout << "Span Copy assignment operator called" << std::endl;
	(void) assign;
	return *this;
}
