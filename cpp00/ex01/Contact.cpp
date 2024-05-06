/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:11:00 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/05 16:32:32 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact() {
	static int	i;

	index = i + 1;
	i++;
}

Contact::~Contact() {
}

void Contact::new_contact() {
	std::string	first;
	std::string	last;
	std::string	number;
	std::string	nick;
	std::string	secret;

	std::cout << "-------------- \033[1;32mCONTACT INFO\033[0m --------------" << std::endl << std::endl;
	std::cout << "Enter first name\t: ";
	std::getline(std::cin, first);
	if (std::cin.eof() || std::cin.fail())
		return ;

	std::cout << "Enter last name\t\t: ";
	std::getline(std::cin, last);
	if (std::cin.eof() || std::cin.fail())
		return ;

	std::cout << "Enter nick name\t\t: ";
	std::getline(std::cin, nick);
	if (std::cin.eof() || std::cin.fail())
		return ;

	std::cout << "Enter phone number\t: ";
	std::getline(std::cin, number);
	if (std::cin.eof() || std::cin.fail())
		return ;

	std::cout << "Enter darkest secret\t: ";
	std::getline(std::cin, secret);
	if (std::cin.eof() || std::cin.fail())
		return ;

	lastname = last;
	firstname = first;
	nickname = nick;
	phonenumber = number;
	darkestsecret = secret;
}

void	Contact::set_index(int i) {
	index = i;
}

void	Contact::print_contact() {
	char	c1;
	char	c2;
	char	c3;

	std::cout << "\t" << index << " \033[1;32m|\033[0m ";
	if (firstname.length() >= 10) {
		for (int i = 0; i < 9; i++) {
			c1 = firstname[i];
			std::cout << c1;
		}
		std::cout << "." << " \033[1;32m|\033[0m ";
	} else {
		for (unsigned long i = 0; i < 10 - firstname.length(); i++) {
			std::cout << " ";
		}
		for (unsigned long i = 0; i < firstname.length(); i++) {
			c1 = firstname[i];
			std::cout << c1;
		}
		std::cout << " \033[1;32m|\033[0m ";
	}

	if (lastname.length() >= 10) {
		for (int i = 0; i < 9; i++) {
			c2 = lastname[i];
			std::cout << c2;
		}
		std::cout << "." << " \033[1;32m|\033[0m ";
	} else {
		for (unsigned long i = 0; i < 10 - lastname.length(); i++) {
			std::cout << " ";
		}
		for (unsigned long i = 0; i < lastname.length(); i++) {
			c2 = lastname[i];
			std::cout << c2;
		}
		std::cout << " \033[1;32m|\033[0m ";
	}

	if (nickname.length() >= 10) {
		for (int i = 0; i < 9; i++) {
			c3 = nickname[i];
			std::cout << c3;
		}
		std::cout << "." << " \033[1;32m|\033[0m ";
	} else {
		for (unsigned long i = 0; i < 10 - nickname.length(); i++) {
			std::cout << " ";
		}
		for (unsigned long i = 0; i < nickname.length(); i++) {
			c3 = nickname[i];
			std::cout << c3;
		}
		std::cout << " \033[1;32m|\033[0m ";
	}

	std::cout << std::endl;
}

void	Contact::print_full_contact() {
	std::cout << "-------------- \033[1;32mCONTACT ";
	std::cout << index << "\033[0m --------------" << std::endl;
	std::cout << std::endl;

	std::cout << "First name\t: " << firstname << std::endl;
	std::cout << "Last name\t: " << lastname << std::endl;
	std::cout << "nick name\t: " << nickname << std::endl;
	std::cout << "Phone number\t: " << phonenumber << std::endl;
	std::cout << "Darkest secret\t: " << darkestsecret << std::endl;
	std::cout << std::endl;
}