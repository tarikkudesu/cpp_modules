/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:21:28 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/15 11:00:11 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main( int ac, char **av ) {

	if (ac != 4) {
		std::cerr << "wrong number of arguments" << std::endl;
		return 1;
	} else if (!*(*av + 1) || !*(*av + 2) || !*(*av + 3)) {
		std::cerr << "empty arguments" << std::endl;
		return 1;
	}

	std::string	filename, s1, s2;
	filename = *(av + 1), s1 = *(av + 2), s2 = *(av + 3);

	Sed	sed(filename);
	sed.replace(s1, s2);
	return 0;
}
