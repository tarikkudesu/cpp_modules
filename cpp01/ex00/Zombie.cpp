/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:26:14 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/06 16:17:00 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {

}

Zombie::Zombie( std::string name ) {
	this->__name = name;
}

Zombie::~Zombie( void ) {
	std::cout << this->name << " has been neutralized" << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
