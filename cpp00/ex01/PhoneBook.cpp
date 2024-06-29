/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:11:06 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/24 18:27:45 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {

}

PhoneBook::~PhoneBook( void ) {

}

void	PhoneBook::menu( void ) {
	std::cout << "\033[1;32m█████████████████████ PHONEBOOK █████████████████████\033[0m" << std::endl << std::endl;
	std::cout << "\tEnter \033[1;33mADD\033[0m to add a new contact" << std::endl;
	std::cout << "\tEnter \033[1;33mSEARCH\033[0m to search" << std::endl;
	std::cout << "\tEnter \033[1;33mEXIT\033[0m to exit" << std::endl;
}

void	PhoneBook::add( void ) {
	system("clear");
	std::cout << "\033[1;32m████████████████████ NEW CONTACT ████████████████████\033[0m" << std::endl << std::endl;
	std::cout << std::endl;
	for (int i = 7; i > 0; i--) {
		contacts[i] = contacts[i - 1];
	}
	contacts[0].new_contact();
	for (int i = 0; i < 8; i++)
		contacts[i].set_index(i + 1);
	nbrContacts++;
	system("clear");
	this->menu();
}

void	PhoneBook::search( void ) {
	system("clear");
	std::cout << "\033[1;32m███████████████████████ SEARCH ███████████████████████\033[0m" << std::endl << std::endl;
	std::cout << "select contact" << std::endl << std::endl;
	for (int i = 0; i < nbrContacts; i++)
		this->contacts[i].display_contact();

	int	index = 0;
	do {
		std::cout << "_";
		std::cin >> index;
		if (std::cin.eof() || std::cin.fail()) {
			std::cout << "Error : enter en integer" << std::endl;
			return ;			
		}
		if (index >= 1 && index <= 8)
			break ;
		std::cout << "index out of range" << std::endl;
	} while (true);
	system("clear");
	this->contacts[index - 1].display_full_contact();
	this->menu();
}
