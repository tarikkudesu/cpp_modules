/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 16:34:00 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/15 11:12:21 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int ac, char **av ) {
	if (ac != 2) {
		std::cerr << "wrong number of arguments" << std::endl;
		return 1;
	}

	Harl	harl;

	harl.complain(*(av + 1));
	return 0;
}
