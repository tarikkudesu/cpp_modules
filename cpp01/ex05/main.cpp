/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:47:44 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/15 10:59:10 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( void ) {
	std::string	input;
	Harl		harl;

	system("clear");
	do {
		std::cout << "_";
		std::cin >> input;
		if (std::cin.fail() || std::cin.eof() || !input.compare("EXIT"))
			break ;
		harl.complain( input );
	} while (true);
	return 0;
}