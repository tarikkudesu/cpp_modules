/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:18:14 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/08 15:49:38 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string _type ) : type( _type ) {

}

Weapon::~Weapon( void ) {

}

const std::string &Weapon::getType( void ) {
	return this->type;
}

void	Weapon::setType( std::string _newType ) {
	this->type = _newType;
}
