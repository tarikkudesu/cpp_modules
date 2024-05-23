/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:03:35 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/23 18:27:25 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	__HitPoints = 100; __EnergyPoints = 100; __AttackDamage = 30;
	std::cout << "\033[1;36mFragTrap Default constructor called\033[0m" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name ) {
	__HitPoints = 100; __EnergyPoints = 100; __AttackDamage = 30;
	std::cout << "\033[1;36mFragTrap string constructor called\033[0m" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "\033[1;36mFragTrap Desctructor called\033[0m" << std::endl;
}

void	FragTrap::attack( const std::string &target ) {
	if (__HitPoints > 0 && __EnergyPoints > 0) {
		__EnergyPoints--;
		std::cout << "FragTrap " << __name << " attacks " << target << ", causing " << __AttackDamage << " points of damage!" << std::endl;
	} else
		std::cout << "FragTrap " << __name << " has no energy points" << std::endl;
}

void	FragTrap::highFivesGuys( void ) {
	std::cout << "\033[1;36m   _     _   _____     _______ _____  _    _   _______ \033[0m" << std::endl;
	std::cout << "\033[1;36m  //____//    //      //_____   //    \\\\  //  //_____ \033[0m" << std::endl;
	std::cout << "\033[1;36m //    //  __//__    //      __//__    \\\\//  //_____ \033[0m" << std::endl;
	std::cout << std::endl;
}
