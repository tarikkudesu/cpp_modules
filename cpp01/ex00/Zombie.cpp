/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:26:14 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/12 19:20:38 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {

}

Zombie::Zombie( std::string name ) {
	this->__name = name;
}

Zombie::~Zombie( void ) {
	std::cout << this->__name << " has been neutralized" << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << this->__name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
