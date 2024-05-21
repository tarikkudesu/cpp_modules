/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:08:07 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/20 12:48:33 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap	zoro("zoro");

	zoro.attack("kaido");
	zoro.takeDamage(3);
	zoro.beRepaired(2);
}
