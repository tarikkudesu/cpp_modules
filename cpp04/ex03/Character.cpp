/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 09:12:35 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/29 11:52:35 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	for (int i = 0; i < 4; i++)
		this->__inventory[i] = NULL;
}

Character::Character( const std::string &name ) : __name(name) {
	for (int i = 0; i < 4; i++)
		this->__inventory[i] = NULL;
}

Character::Character( const Character &src ) {
	*this = src;
}

Character	&Character::operator=( const Character &rhs ) {
	if (this != &rhs) {
		for (int i = 0; i < 4; i++) {
			if (this->__inventory[i])
				delete this->__inventory[i];
		}
		for (int i = 0; i < 4; i++) {
			if (rhs.__inventory[i])
				this->__inventory[i] = new AMateria( *rhs.__inventory[i] );
		}
	}
	return *this;
}

Character::~Character() {

}

std::string const	&Character::getName() const {
	return this->__name;
}

void	Character::equip( AMateria* m ) {
	for (int i = 0; i < 4; i++) {
		if (!this->__inventory[i])
			this->__inventory[i] = m;
	}
}

void	Character::unequip( int idx ) {
	if (idx < 4)
		this->__inventory[idx] = NULL;
}

void	Character::use( int idx, ICharacter& target ) {
	if (idx >= 0 && idx < 4)
		this->__inventory[idx]->use( target );
}
