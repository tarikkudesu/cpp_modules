/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:52:10 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/21 19:49:00 by tamehri          ###   ########.fr       */
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

// ScavTrap::ScavTrap( ScavTrap const &src ) {
// 	std::cout << "ScavTrap Copy constructor called" << std::endl;
// 	*this = src;
// }


ScavTrap::~ScavTrap() {
	std::cout << "\033[1;33mScavTrap Destructor called\033[0m" << std::endl;
}

// ScavTrap	&ScavTrap::operator=( ScavTrap const &rhs ) {
// 	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
// 	if (this != &rhs) {
// 		this->__name = rhs.__name;
// 		this->__HitPoints = rhs.__HitPoints;
// 		this->__EnergyPoints = rhs.__EnergyPoints;
// 		this->__AttackDamage = rhs.__AttackDamage;
// 	}
// 	return *this;
// }

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

