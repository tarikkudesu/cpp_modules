/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:01:59 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/03 12:44:33 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	this->__HitPoints = 100; this->__EnergyPoints = 50; this->__AttackDamage = 20;
	std::cout << "\033[33mScavTrap Default constructor called\033[0m" << std::endl;
}

ScavTrap::ScavTrap( std::string const &name ) : ClapTrap( name ) {
	this->__HitPoints = 100; this->__EnergyPoints = 50; this->__AttackDamage = 20;
	std::cout << "\033[33mScavTrap string constructor called\033[0m" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &src ) {
	std::cout << "\033[33mScavTrap copy constructor called\033[0m" << std::endl;
	*this = src;
}

ScavTrap	&ScavTrap::operator=( const ScavTrap &rhs ) {
	std::cout << "\033[32mScavTrap Copy assignment operator called\033[0m" << std::endl;
	if (this != &rhs) {
		this->__name = rhs.__name;
		this->__HitPoints = rhs.__HitPoints;
		this->__AttackDamage = rhs.__AttackDamage;
		this->__EnergyPoints = rhs.__EnergyPoints;	
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "\033[33mScavTrap Desctructor called\033[0m" << std::endl;
}

void	ScavTrap::attack( const std::string &target ) {
	if (this->__HitPoints > 0 && this->__EnergyPoints > 0) {
		this->__EnergyPoints--;
		std::cout << "ScavTrap " << this->__name << " attacks " << target << ", causing " << this->__AttackDamage << " points of damage!" << std::endl;
	} else
		std::cout << "ScavTrap " << this->__name << " has no energy points" << std::endl;
}

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap is now Gate keeper mode" << std::endl;
}
