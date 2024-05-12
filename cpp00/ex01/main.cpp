/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:11:03 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/11 17:18:22 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	menu( void ) {
	std::cout << "---------------------\033[1;32m PHONEBOOK \033[0m---------------------" << std::endl;
	std::cout << "\tEnter \033[1;33mADD\033[0m to add a new contact" << std::endl;
	std::cout << "\tEnter \033[1;33mSEARCH\033[0m to search" << std::endl;
	std::cout << "\tEnter \033[1;33mEXIT\033[0m to exit" << std::endl;
}

int	main( void ) {
	std::string	input;
	PhoneBook	phonebook;

	system("clear");
	menu();
	do {
		std::cout << "_";
		std::getline(std::cin, input);
		if (std::cin.eof() || std::cin.fail()) {
			system("clear");
			return 0;
		}
		if (!input.compare("ADD")) {
			phonebook.add();
			menu();
		} else if (!input.compare("SEARCH")) {
			phonebook.search();
			menu();
		} else if (!input.compare("EXIT"))
			break ;
		input.clear();
	} while (true);
	std::cout << "------------------------\033[1;32m EXIT \033[0m-----------------------" << std::endl;
	return 0;
}
