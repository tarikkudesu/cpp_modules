/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:20:24 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/03 14:09:22 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main( void ) {
	DiamondTrap	DT_1( "Fooooooooo" );

	DT_1.attack( "Zombie" );
	DT_1.takeDamage( 4 );
	DT_1.beRepaired( 23 );
	DT_1.whoAmI();

	return 0;
}