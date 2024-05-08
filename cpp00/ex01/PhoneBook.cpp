/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:11:06 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/07 10:37:39 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
}

PhoneBook::~PhoneBook() {
}

void	PhoneBook::add() {
	system("clear");
	for (int i = 7; i > 0; i--) {
		this->contacts[i] = this->contacts[i - 1];
	}

	this->contacts[0].new_contact();

	for (int i = 0; i < 8; i++) {
		this->contacts[i].set_index(i + 1);
	}
	system("clear");
}

void	PhoneBook::init() {
	for (int i = 0; i < 2; i++) {
		this->contacts[i].new_contact();
	}
}

void	PhoneBook::search() {
	int	id;

	system("clear");
	std::cout << std::endl;
	std::cout << "---------------- \033[1;32mPHONEBOOK CONTACTS\033[0m ----------------";
	std::cout << std::endl << std::endl;
	std::cout << "choose a contact :" << std::endl;
	for (int i = 0; i < 8; i++) {
		this->contacts[i].print_contact();
	}

	id = 0;
	while (true) {
		id = 0;
		std::cin >> id;
		std::cout << id << "\n";
		if (std::cin.eof() || std::cin.fail())
			return ;
		else if (id > 0 && id <= 8)
			break;
		std::cout << "\033[1;31mindex must be between 1 and 8\033[0m" << std::endl;
	}
	system("clear");
	this->contacts[id - 1].print_full_contact();
}
