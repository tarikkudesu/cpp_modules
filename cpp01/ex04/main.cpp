/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:21:28 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/10 17:44:28 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main( int ac, char **av ) {

	if (ac != 4) {
		std::cerr << "Error : wrong number of arguments" << std::endl;
		return 1;
	} else if (!**(av + 1) || !**(av + 2) || !**(av + 3)) {
		std::cerr << "Error : empty argument" << std::endl;
		return 1;
	}

	std::string	infile, _s1, _s2;
	infile = *(av + 1), _s1 = *(av + 2), _s2 = *(av + 3);
	
	Sed	sed( infile );
	sed.replace(_s1, _s2);
	return 0;
}
