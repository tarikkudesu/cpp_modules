/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:16:45 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/06 19:51:40 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

int	main( void ) {
	Weapon sword("sword");

	std::string type = sword.getType();
	std::cout << type << std::endl;
	type = "sf";
	sword.setType("katana");
	// type = sword.getType();
	std::cout << type << std::endl;
}
