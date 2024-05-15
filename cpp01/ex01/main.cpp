/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:22:05 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/14 15:02:42 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombie_Horde( int N, std::string name ) {
	Zombie	*zombies;

	zombies = new Zombie[N];

	if (N < 1)
		return (NULL);
	for (int i = 0; i < N; i++)
		new (zombies + i) Zombie(name);

	return zombies;
}

int main( void ) {
	int		_nbZombies;
	Zombie	*zombies;

	std::cout << "Enter the number of zombies : ";
	std::cin >> _nbZombies;
	if (std::cin.fail() || std::cin.eof())
		return 1;
	if (_nbZombies < 1 || _nbZombies > 100) {
		std::cout << "Please enter a valid number" << std::endl;
		return 1;
	}

	zombies = zombie_Horde(_nbZombies, "Foo");
	for (int i = 0; i < _nbZombies; i++) {
		zombies[i].announce();
	}

	delete[] zombies;
	return 0;
}
