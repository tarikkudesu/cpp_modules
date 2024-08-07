/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:20:24 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/03 13:27:36 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void ) {
	FragTrap	FT_1( "Repetitive work" );

	FT_1.attack( "Zombie" );
	FT_1.takeDamage( 4 );
	FT_1.beRepaired( 23 );
	FT_1.highFivesGuys();

	return 0;
}