/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:22:11 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/06 17:21:56 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name ) {
	Zombie	*zombies;
	
	zombies = new Zombie[N];
	for (int i = 0; i < N; i ++) {
		new (zombies + i) Zombie(name);
	}
	
	return zombies;
}
