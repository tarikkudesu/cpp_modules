/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:22:05 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/27 08:11:07 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
	int		_nbZombies;
	Zombie	*zombies;

	std::cout << "Enter the number of zombies : ";
	std::cin >> _nbZombies;
	if (std::cin.fail() || std::cin.eof())
		return 1;

	if (_nbZombies > 0 && _nbZombies <= 100) {
		zombies = zombieHorde(_nbZombies, "Foo");

		for (int i = 0; i < _nbZombies; i++)
			zombies[i].announce();

		delete[] zombies;
	} else
		std::cout << "Please enter a valid number" << std::endl;

	return 0;
}
