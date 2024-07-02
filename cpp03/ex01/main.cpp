/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:20:24 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/01 16:53:24 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main( void ) {
	ScavTrap	ST_1( "Serena, my love!" );
	ScavTrap	ST_2( "Serenaaaaaaaaa, my love!" );


	ST_1 = ST_2;
	ST_1.attack( "kaido" );
	ST_1.takeDamage( 2 );
	ST_1.beRepaired( 12 );
	ST_1.guardGate();

	return 0;
}