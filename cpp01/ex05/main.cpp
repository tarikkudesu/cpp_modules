/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:47:44 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/11 16:33:58 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( void ) {
	Harl	harl;
	std::string	input;

	while (true) {
		std::cout << "_";
		std::cin >> input;
		if (input.empty() || !input.compare("EXIT"))
			break ;
		else
			harl.complain(input);
		input.clear();
	}
}
