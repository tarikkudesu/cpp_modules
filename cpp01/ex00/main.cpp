/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:26:08 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/06 16:52:14 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void ) {
	Zombie	*Foo;

	Foo = newZombie("Foo");
	Foo->announce();

	delete Foo;
	Foo = nullptr;

	randomChump("Hannibal");
}
