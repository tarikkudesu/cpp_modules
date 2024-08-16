#include "Span.hpp"

Span::Span() : N( 0 ), inventory( 0 ), sS( 0 ), lS( 0 ) {

}

Span::Span( const unsigned int n ) : N( n ), inventory( 0 ), sS( 0 ), lS( 0 ) {

}

Span::Span( const Span &copy ) : N( copy.N ), sS( copy.sS ), lS( copy.lS ) {
	*this = copy;
}

Span::~Span() {

}

Span	&Span::operator=( const Span &assign ) {
	if (this != &assign) {
		this->N = assign.N;
		this->lS = assign.lS;
		this->sS = assign.sS;
		this->inventory.clear();
		std::copy(assign.inventory.begin(), assign.inventory.end(), this->inventory.begin());
	}
	return *this;
}

void	Span::addNumber( int nbr ) {
	if (this->inventory.size() >= this->N)
		throw fullContainer();
	this->inventory.push_back( nbr );
	if (this->inventory.size() == 2) {
		this->lS = std::abs(*(this->inventory.end() - 1) - *(this->inventory.begin()));
		this->sS = this->lS;
	} else if (this->inventory.size() >= 2) {
		long int	span = std::abs(*(this->inventory.end() - 1) - *(this->inventory.end() - 2));
		if (span > this->lS)
			this->lS = span;
		else if (span < this->sS)
			this->sS = span;
	}
}

int	randomNumber( void ) { return std::rand(); }

void	Span::fillContainer( void ) {
	srand(static_cast<unsigned int>(time(0)));
	this->inventory.resize(this->N);
	std::generate(this->inventory.begin(), this->inventory.end(), randomNumber);
	if (this->inventory.size() >= 2) {
		this->sS = std::abs(*(this->inventory.end() - 1) - *(this->inventory.end() - 2));
		this->lS = this->sS;
		for (std::vector<int>::iterator iter = inventory.begin(); iter != inventory.end() - 2; iter++) {
			long int	span = std::abs(*iter - *(iter + 1));
			if (span > this->lS)
				this->lS = span;
			else if (span < this->sS)
				this->sS = span;
		}
	}
}

long	Span::shortestSpan( void ) { return this->inventory.size() >= 2 ? this->sS : throw emptyContainer(); }
long	Span::longestSpan( void ) { return this->inventory.size() >= 2 ? this->lS : throw emptyContainer(); }

const char	*Span::fullContainer::what( void ) const throw() { return "\033[1;31merror: full container\033[0m"; }
const char	*Span::emptyContainer::what( void ) const throw() { return "\033[1;31merror: container is empty or has one element\033[0m"; }
