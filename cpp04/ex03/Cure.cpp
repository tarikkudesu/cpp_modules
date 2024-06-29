/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 09:37:20 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/29 09:47:14 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria( "cure" ) {

}

Cure::Cure( const Cure &src ) {
	*this = src;
}

Cure	&Cure::operator=( const Cure &rhs ) {
	if (this != &rhs)
		this->__type = rhs.getType();
	return *this;
}

Cure::~Cure() {

}

AMateria	*Cure::clone() const {
	return new Cure( *this );
}

void		Cure::use( ICharacter &target ) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
