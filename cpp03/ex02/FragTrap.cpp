/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:03:35 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/03 13:27:59 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->__HitPoints = 100; this->__EnergyPoints = 100; this->__AttackDamage = 30;
	std::cout << "\033[36mFragTrap Default constructor called\033[0m" << std::endl;
}

FragTrap::FragTrap( std::string const &name ) : ClapTrap( name ) {
	this->__HitPoints = 100; this->__EnergyPoints = 100; this->__AttackDamage = 30;
	std::cout << "\033[36mFragTrap string constructor called\033[0m" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "\033[36mFragTrap Desctructor called\033[0m" << std::endl;
}

FragTrap::FragTrap( const FragTrap &src ) {
	std::cout << "\033[36mFragTrap copy constructor called\033[0m" << std::endl;
	*this = src;
}

FragTrap	&FragTrap::operator=( FragTrap const &rhs ) {
	std::cout << "\033[36mFragTrap Copy assignment operator called\033[0m" << std::endl;
	if (this != &rhs) {
		this->__name = rhs.__name;
		this->__HitPoints = rhs.__HitPoints;
		this->__AttackDamage = rhs.__AttackDamage;
		this->__EnergyPoints = rhs.__EnergyPoints;	
	}
	return *this;
}


void	FragTrap::attack( const std::string &target ) {
	if (this->__HitPoints > 0 && this->__EnergyPoints > 0) {
		this->__EnergyPoints--;
		std::cout << "FragTrap " << this->__name << " attacks " << target << ", causing " << this->__AttackDamage << " points of damage!" << std::endl;
	} else
		std::cout << "FragTrap " << this->__name << " has no energy points" << std::endl;
}

void	FragTrap::highFivesGuys( void ) {
	std::cout << "\033[1;36m   _     _   _____     _______ _____  _    _   _______ \033[0m" << std::endl;
	std::cout << "\033[1;36m  //____//    //      //_____   //    \\\\  //  //_____ \033[0m" << std::endl;
	std::cout << "\033[1;36m //    //  __//__    //      __//__    \\\\//  //_____ \033[0m" << std::endl;
	std::cout << std::endl;
}
