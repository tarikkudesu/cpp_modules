/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 08:52:31 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/19 20:32:53 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria( "ice" ) {

}

Ice::Ice( const Ice &src ) {
	*this = src;
}

Ice	&Ice::operator=( const Ice &rhs ) {
	if (this != &rhs)
		this->__type = "ice";
	return *this;
}

Ice::~Ice() {

}

AMateria	*Ice::clone() const {
	return new Ice( *this );
}

void		Ice::use( ICharacter &target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
