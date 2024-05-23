/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:20:39 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/23 18:24:52 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : __HitPoints(10), __EnergyPoints(10), __AttackDamage(0) {
	std::cout << "\033[1;32mClapTrap Default constructor called\033[0m" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : __name(name), __HitPoints(10), __EnergyPoints(10), __AttackDamage(0) {
	std::cout << "\033[1;32mClapTrap string constructor called\033[0m" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "\033[1;32mClapTrap Desctructor called\033[0m" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &rhs ) {
	std::cout << "\033[1;32mClapTrap copy constructor called\033[0m" << std::endl;
	*this = rhs;	
}

ClapTrap &ClapTrap::operator=( const ClapTrap &rhs ) {
	std::cout << "\033[1;32mClapTrap Copy assignment operator called\033[0m" << std::endl;
	if (this != &rhs) {
		this->__name = rhs.__name;
		this->__HitPoints = rhs.__HitPoints;
		this->__AttackDamage = rhs.__AttackDamage;
		this->__EnergyPoints = rhs.__EnergyPoints;	
	}
	return *this;
}

void	ClapTrap::attack( const std::string& target ) {
	if (__HitPoints > 0 && __EnergyPoints > 0) {
		__EnergyPoints--;
		std::cout << "ClapTrap " << __name << " attacks " << target << ", causing " << __AttackDamage << " points of damage!" << std::endl;
	} else
		std::cout << "ClapTrap " << __name << " has no energy points" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if (amount > __HitPoints)
		__HitPoints = 0;
	else
		__HitPoints -= amount;
	std::cout << "ClapTrap " << __name << " was damaged, Hit points : " << __HitPoints << ", Energy points : " << __EnergyPoints << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (__HitPoints > 0 && __EnergyPoints > 0) {
		__HitPoints += amount;
		__EnergyPoints--;
		std::cout << "ClapTrap " << __name << " was repaired, Hit points : " << __HitPoints << ", Energy points : " << __EnergyPoints << std::endl;
	} else
		std::cout << "ClapTrap " << __name << " has no energy points" << std::endl;
}
