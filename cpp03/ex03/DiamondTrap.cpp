/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:23:42 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/23 18:27:43 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {
	__HitPoints = 100;
	__EnergyPoints = 50;
	__AttackDamage = 30;
	std::cout << "\033[1;35mDiamondTrap Default constructor called\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), __name(name) {
	__HitPoints = 100;
	__EnergyPoints = 50;
	__AttackDamage = 30;
	std::cout << "\033[1;35mDiamondTrap string constructor called\033[0m" << std::endl;
}

void	DiamondTrap::attack( const std::string &target ) {
	ScavTrap::attack( target );
}

DiamondTrap::~DiamondTrap() {
	std::cout << "\033[1;35mDiamondTrap Desctructor called\033[0m" << std::endl;
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "ClapTrap : " << ClapTrap::__name << ", DiamondTrap : " << this->__name << std::endl;
}