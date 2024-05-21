/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:23:47 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/21 18:45:30 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) {
	(void)name;
	std::cout << "DiamondTrap String constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

