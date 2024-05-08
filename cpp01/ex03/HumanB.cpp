/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:18:06 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/08 16:17:52 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string _name ) : name( _name ) {
	weapon = nullptr;
}

HumanB::~HumanB() {
	
}

void	HumanB::setWeapon( Weapon &_weapon ) {
	this->weapon = &_weapon;
}

void	HumanB::attack() {
	std::cout << this->name \
				<< " attacks with their " << this->weapon->getType() << std::endl;
}

