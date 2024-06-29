/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 08:40:10 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/29 11:39:51 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {

}

AMateria::AMateria( std::string const &type ) : __type(type) {

}

AMateria::AMateria( const AMateria &src ) {
	*this = src;
}

AMateria	&AMateria::operator=( const AMateria &rhs ) {
	if (this != &rhs)
		this->__type = rhs.__type;
	return *this;
}

AMateria::~AMateria() {

}

std::string const	&AMateria::getType() const {
	return this->__type;
}

AMateria	*AMateria::clone() const {
	return new AMateria( *this );
}

void		AMateria::use( ICharacter &target ) {
	(void)target;
}
