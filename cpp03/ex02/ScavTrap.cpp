/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:01:59 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/23 18:26:46 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	__HitPoints = 100; __EnergyPoints = 50; __AttackDamage = 20;
	std::cout << "\033[1;33mScavTrap Default constructor called\033[0m" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	__HitPoints = 100; __EnergyPoints = 50; __AttackDamage = 20;
	std::cout << "\033[1;33mScavTrap string constructor called\033[0m" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "\033[1;33mScavTrap Desctructor called\033[0m" << std::endl;
}

void	ScavTrap::attack( const std::string &target ) {
	if (__HitPoints > 0 && __EnergyPoints > 0) {
		__EnergyPoints--;
		std::cout << "ScavTrap " << __name << " attacks " << target << ", causing " << __AttackDamage << " points of damage!" << std::endl;
	} else
		std::cout << "ScavTrap " << __name << " has no energy points" << std::endl;
}

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap is now Gate keeper mode" << std::endl;
}
