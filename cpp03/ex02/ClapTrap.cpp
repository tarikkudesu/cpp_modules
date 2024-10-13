/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:20:39 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/05 09:47:29 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : __HitPoints( 10 ), __EnergyPoints( 10 ), __AttackDamage( 0 ) {
	std::cout << "\033[32mClapTrap Default constructor called\033[0m" << std::endl;
}

ClapTrap::ClapTrap( std::string const &name ) : __name( name ), __HitPoints( 10 ), __EnergyPoints( 10 ), __AttackDamage( 0 ) {
	std::cout << "\033[32mClapTrap string constructor called\033[0m" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "\033[32mClapTrap Desctructor called\033[0m" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &rhs ) {
	std::cout << "\033[32mClapTrap copy constructor called\033[0m" << std::endl;
	*this = rhs;	
}

ClapTrap &ClapTrap::operator=( const ClapTrap &rhs ) {
	std::cout << "\033[32mClapTrap Copy assignment operator called\033[0m" << std::endl;
	if (this != &rhs) {
		this->__name = rhs.__name;
		this->__HitPoints = rhs.__HitPoints;
		this->__AttackDamage = rhs.__AttackDamage;
		this->__EnergyPoints = rhs.__EnergyPoints;
	}
	return *this;
}

void	ClapTrap::attack( const std::string& target ) {
	if (this->__HitPoints > 0 && this->__EnergyPoints > 0) {
		this->__EnergyPoints--;
		std::cout << "ClapTrap " << this->__name << " attacks " << target << ", causing " << this->__AttackDamage << " points of damage!" << std::endl;
	} else
		std::cout << "ClapTrap " << this->__name << " has no energy points" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if (amount > this->__HitPoints)
		this->__HitPoints = 0;
	else
		this->__HitPoints -= amount;
	std::cout << "ClapTrap " << this->__name << " was damaged, Hit points : " << this->__HitPoints << ", Energy points : " << this->__EnergyPoints << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (this->__HitPoints > 0 && this->__EnergyPoints > 0) {
		this->__HitPoints += amount;
		this->__EnergyPoints--;
		std::cout << "ClapTrap " << this->__name << " was repaired, Hit points : " << this->__HitPoints << ", Energy points : " << this->__EnergyPoints << std::endl;
	} else
		std::cout << "ClapTrap " << this->__name << " has no energy points" << std::endl;
}
