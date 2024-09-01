/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:56:30 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/27 16:56:31 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0), __inventory(0) {

}

Span::Span( unsigned int n ) : N( n ), __inventory( 0 ) {

}

Span::Span( const Span &copy ) : N( copy.N ), __inventory( copy.N ) {
	std::copy(copy.__inventory.cbegin(), copy.__inventory.cend(), this->__inventory.begin());
}

Span::~Span() {

}

Span	&Span::operator=( const Span &assign ) {
	if (this != &assign) {
		this->N = assign.N;
		this->__inventory.clear();
		this->__inventory.resize( assign.__inventory.size() );
		std::copy(assign.__inventory.cbegin(), assign.__inventory.cend(), this->__inventory.begin());
	}
	return *this;
}

void	Span::addNumber( int nbr ) {
	if (this->__inventory.size() >= this->N)
		throw fullContainer();
	this->__inventory.push_back( nbr );
}

void	Span::fillContainer( void ) {
	srand(static_cast< unsigned int >(time(NULL)));
	this->__inventory.resize(this->N);
	std::generate(this->__inventory.begin(), this->__inventory.end(), std::rand);
}

size_t	Span::shortestSpan( void ) {
	if (this->__inventory.size() < 2)
		throw emptyContainer();
	std::sort(this->__inventory.begin(), this->__inventory.end());
	size_t sS = *(this->__inventory.begin() + 1) - *(this->__inventory.begin());
	for (std::vector<int>::iterator it = this->__inventory.begin() + 1; it != this->__inventory.end() - 1; it++)
		if (static_cast< size_t >((*(it + 1) - *it)) < sS) {
			sS = static_cast< size_t >((*(it + 1) - *it));
		}
	return sS;
}

size_t	Span::longestSpan( void ) {
	if (this->__inventory.size() < 2)
		throw emptyContainer();
	std::sort(this->__inventory.begin(), this->__inventory.end());
	return *(this->__inventory.end() - 1) - *(this->__inventory.begin());
}

const char	*Span::fullContainer::what( void ) const throw() { return "\033[31merror: full container\033[0m"; }
const char	*Span::emptyContainer::what( void ) const throw() { return "\033[31merror: container is empty or has one element\033[0m"; }
