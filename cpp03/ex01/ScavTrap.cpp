/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:52:10 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/21 17:21:57 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	__HitPoints = 100; __EnergyPoints = 50; __AttackDamage = 20;
	std::cout << "\033[1;33mScavTrap Default constructor called\033[0m" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	__HitPoints = 100; __EnergyPoints = 50; __AttackDamage = 20;
	std::cout << "\033[1;33mScavTrap String constructor called\033[0m" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "\033[1;33mScavTrap Destructor called\033[0m" << std::endl;
}

void	ScavTrap::attack( const std::string &target ) {
	if (__EnergyPoints > 0) {
		__EnergyPoints--;
		std::cout << "ScavTrap " << __name << " attacks " << target << ", causing " << __AttackDamage << " Points of damage!" << std::endl;
	} else
		std::cout << "ScavTrap " << __name << " attacks " << target << ", causing " << 0 << " Points of damage!" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
