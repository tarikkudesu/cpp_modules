/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:11:03 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/30 14:52:30 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <signal.h>

int	main( void ) {
	std::string	input;
	PhoneBook	phonebook;

	system("clear");
	phonebook.menu();
	do {
		std::getline(std::cin, input);
		if (std::cin.eof() || std::cin.fail()) {
			break ;
		} else if (!input.compare("EXIT")) {
			break ;
		} else if (!input.compare("ADD")) {
			phonebook.add();
		} else if (!input.compare("SEARCH"))
			phonebook.search();
		input.clear();
	} while (true);
	system("clear");
	std::cout << "\033[1;32m████████████████████████ EXIT ████████████████████████\033[0m" << std::endl;
	return 0;
}
