/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:23:42 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/03 14:45:18 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {
	this->__HitPoints = 100; this->__EnergyPoints = 50; this->__AttackDamage = 30;
	std::cout << "\033[35mDiamondTrap Default constructor called\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap( std::string const &name ) : ClapTrap( name + "_clap_name" ), ScavTrap( name ), FragTrap( name ), __name( name ) {
	this->__HitPoints = 100; this->__EnergyPoints = 50; this->__AttackDamage = 30;
	std::cout << "\033[35mDiamondTrap string constructor called\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const &src ) {
	std::cout << "\033[35mDiamondTrap copy constructor called\033[0m" << std::endl;
	*this = src;
}

DiamondTrap	&DiamondTrap::operator=( DiamondTrap const &rhs ) {
	std::cout << "\033[35mDiamondTrap Copy assignment operator called\033[0m" << std::endl;
	if (this != &rhs) {
		this->__name = rhs.__name;
		this->__HitPoints = rhs.__HitPoints;
		this->__AttackDamage = rhs.__AttackDamage;
		this->__EnergyPoints = rhs.__EnergyPoints;
		this->ClapTrap::__name = rhs.ClapTrap::__name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "\033[35mDiamondTrap Desctructor called\033[0m" << std::endl;
}

void	DiamondTrap::attack( const std::string &target ) {
	ScavTrap::attack( target );
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "ClapTrap : " << ClapTrap::__name << ", DiamondTrap : " << this->__name << std::endl;
}