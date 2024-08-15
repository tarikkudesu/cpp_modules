#include "Span.hpp"

Span::Span() : N( 0 ), inventory( 0 ) {

}

Span::Span( const unsigned int n ) : N( n ), inventory( 0 ) {

}

Span::Span( const Span &copy ) : N( copy.N ) {
	*this = copy;
}

Span::~Span() {

}

Span	&Span::operator=( const Span &assign ) {
	if (this != &assign) {
		this->N = assign.N;
		this->inventory.clear();
		std::copy(assign.inventory.begin(), assign.inventory.end(), this->inventory.begin());
	}
	return *this;
}

void	Span::addNumber( int nbr ) {
	if (this->inventory.size() >= this->N)
		throw fullContainer();
	this->inventory.push_back( nbr );
}

const char	*Span::fullContainer::what( void ) const throw() { return "\033[1;31merror: full container\033[0m"; }
const char	*Span::emptyContainer::what( void ) const throw() { return "\033[1;31merror: full container\033[0m"; }
