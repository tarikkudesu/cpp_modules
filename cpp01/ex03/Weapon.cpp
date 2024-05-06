/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:18:14 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/06 19:47:50 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string _type ) {
	type = _type;
}

Weapon::~Weapon( void ) {

}

const std::string &Weapon::getType( void ) {
	return (type);
}

void	Weapon::setType( std::string _newType ) {
	type = _newType;
}
