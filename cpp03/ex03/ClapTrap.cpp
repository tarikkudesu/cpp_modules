/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:06:57 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/21 19:50:29 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : __HitPoints(10), __EnergyPoints(10), __AttackDamage(0) {
	std::cout << "\033[1;32mClapTrap Default constructor called\033[0m" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : __name(name), __HitPoints(10), __EnergyPoints(10), __AttackDamage(0) {
	std::cout << "\033[1;32mClapTrap String constructor called\033[0m" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &src ) {
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << "\033[1;32mClapTrap Destructor called\033[0m" << std::endl;

}

ClapTrap	&ClapTrap::operator=( ClapTrap const &rhs ) {
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &rhs)
		*this = rhs;
	return *this;
}

void	ClapTrap::attack( const std::string &target ) {
	if (__EnergyPoints > 0) {
		__EnergyPoints--;
		std::cout << "ClapTrap " << __name << " attacks " << target << ", causing " << __AttackDamage << " Points of damage!" << std::endl;
	} else {
		std::cout << "ClapTrap " << __name << " attacks " << target << ", causing " << 0 << " Points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if (amount > __HitPoints)
		__HitPoints = 0;
	else
		__HitPoints -= amount;
	std::cout << "ClapTrap " << __name << " took damage, hit points\t:" << __HitPoints << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	__HitPoints += amount;
	std::cout << "ClapTrap " << __name << " got repaired, hit points\t:" << __HitPoints << std::endl;
}
