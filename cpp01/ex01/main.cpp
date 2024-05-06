/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:22:05 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/06 17:28:48 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
	Zombie	*Foo = nullptr;
	int	_nbZombies = 5;

	Foo = zombieHorde(_nbZombies, "Foo");

	for (int i = 0; i < _nbZombies; i++) {
		Foo[i].announce();
	}

	delete[] Foo;
}
