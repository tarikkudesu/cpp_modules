/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:08:07 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/21 13:19:33 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void ) {
	ScavTrap	Zoro("Zoro");

	Zoro.attack("kaido");
	Zoro.takeDamage(3);
	Zoro.beRepaired(2);

	Zoro.guardGate();
}
