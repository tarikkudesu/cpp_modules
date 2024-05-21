/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:23:12 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/21 19:49:32 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	__HitPoints = 100; __EnergyPoints = 100; __AttackDamage = 30;
	std::cout << "\033[1;36mFragTrap Default constructor called\033[0m" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	__HitPoints = 100; __EnergyPoints = 100; __AttackDamage = 30;
	std::cout << "\033[1;36mFragTrap String constructor called\033[0m" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "\033[1;36mFragTrap Destructor called\033[0m" << std::endl;
}

void	FragTrap::highFivesGuys( void ) {
	std::cout << "\033[1;34m _     _ _____      _______ _____ _    _ _______ \033[0m" << std::endl;
	std::cout << "\033[1;34m |_____|   |        |______   |    \\  /  |______ \033[0m" << std::endl;
	std::cout << "\033[1;34m |     | __|__      |       __|__   \\/   |______ \033[0m" << std::endl;
	std::cout << std::endl;
}
