/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:08:07 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/21 16:09:22 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void ) {
	FragTrap	Zoro("Zoro");

	Zoro.attack("kaido");
	Zoro.takeDamage(3);
	Zoro.beRepaired(2);

	Zoro.highFivesGuys();
}
