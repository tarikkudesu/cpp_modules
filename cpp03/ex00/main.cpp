/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:20:24 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/03 14:10:00 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void ) {

	ClapTrap	CT_1( "Aaaaand... OPEN!");

	CT_1.attack( "Zombie" );
	CT_1.takeDamage( 4 );
	CT_1.beRepaired( 16 );

	return 0;
}