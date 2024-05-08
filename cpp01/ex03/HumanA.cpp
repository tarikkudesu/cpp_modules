/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:13:04 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/08 15:52:11 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

HumanA::HumanA( std::string _name, Weapon &_weapon ) : name( _name ), weapon( _weapon ) {

}

HumanA::~HumanA() {
	
}

void	HumanA::attack() {
	std::cout << this->name \
				<< " attacks with their " << this->weapon.getType() << std::endl;
}
