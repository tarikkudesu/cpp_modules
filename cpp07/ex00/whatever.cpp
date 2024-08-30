/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:38:38 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/26 09:38:39 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

Whatever::Whatever() : __whatever( "whatever" ) { }

Whatever::Whatever( std::string const &whatever ) : __whatever( whatever ) { }

Whatever::Whatever( const Whatever &copy ) : __whatever( copy.__whatever ) { }

Whatever::~Whatever() { }

Whatever	&Whatever::operator=( const Whatever &assign ) {
	__whatever = assign.__whatever;
	return *this;
}

bool	Whatever::operator==( Whatever const & rhs ) const {
	return (this->__whatever == rhs.__whatever);
}

bool	Whatever::operator!=( Whatever const & rhs ) const {
	return (this->__whatever != rhs.__whatever);
}

bool	Whatever::operator>( Whatever const & rhs ) const {
	return (this->__whatever > rhs.__whatever);
}

bool	Whatever::operator<( Whatever const & rhs ) const {
	return (this->__whatever < rhs.__whatever);
}

bool	Whatever::operator>=( Whatever const & rhs ) const {
	return (this->__whatever >= rhs.__whatever);
}

bool	Whatever::operator<=( Whatever const & rhs ) const {
	return (this->__whatever <= rhs.__whatever);
}

std::string Whatever::getWhatever() const {
	return __whatever;
}

std::ostream	&operator<<( std::ostream &o, const Whatever &a ) {
	o << a.getWhatever();
	return o;
}