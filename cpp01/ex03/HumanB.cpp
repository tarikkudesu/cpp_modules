/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:18:06 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/07 16:29:25 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string _name ) : name( _name ) {
	weapon = NULL;
}

HumanB::~HumanB() {

}

void	HumanB::setWeapon( Weapon &_weapon ) {
	this->weapon = &_weapon;
}

void	HumanB::attack() {
	if (weapon) {
		std::cout << this->name \
				<< " attacks with their " << this->weapon->getType() << std::endl;
	}
}

