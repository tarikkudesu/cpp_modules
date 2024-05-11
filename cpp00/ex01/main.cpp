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
	std::cout << "-------------- \033[1;32mPHONEBOOK\033[0m --------------" << std::endl << std::endl;
	std::cout << "\tEnter \033[1;33mADD\033[0m to add a new contact" << std::endl;
	std::cout << "\tEnter \033[1;33mSEARCH\033[0m to search" << std::endl;
	std::cout << "\tEnter \033[1;33mEXIT\033[0m to exit" << std::endl;
}

int	main() {
	std::string	input;
	PhoneBook	PB;

	system("clear");
	menu();
	while (true) {
		std::getline(std::cin, input);
		if (std::cin.eof() || !input.compare("EXIT") || std::cin.fail()) {
			system("clear");
			break ;
		} else if (!input.compare("ADD")) {
			PB.add();
			menu();
		} else if (!input.compare("SEARCH")) {
			PB.search();
			menu();
		}
		input.clear();
	}
}
