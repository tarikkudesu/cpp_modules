/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:11:00 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/07 10:36:41 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact() {
	static int	i;

	this->index = i + 1;
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

	this->lastname = last;
	this->firstname = first;
	this->nickname = nick;
	this->phonenumber = number;
	this->darkestsecret = secret;
}

void	Contact::set_index(int i) {
	this->index = i;
}

void	Contact::print_contact() {
	char	c1;
	char	c2;
	char	c3;

	std::cout << "\t" << this->index << " \033[1;32m|\033[0m ";
	if (this->firstname.length() >= 10) {
		for (int i = 0; i < 9; i++) {
			c1 = this->firstname[i];
			std::cout << c1;
		}
		std::cout << "." << " \033[1;32m|\033[0m ";
	} else {
		for (unsigned long i = 0; i < 10 - this->firstname.length(); i++) {
			std::cout << " ";
		}
		for (unsigned long i = 0; i < this->firstname.length(); i++) {
			c1 = this->firstname[i];
			std::cout << c1;
		}
		std::cout << " \033[1;32m|\033[0m ";
	}

	if (this->lastname.length() >= 10) {
		for (int i = 0; i < 9; i++) {
			c2 = this->lastname[i];
			std::cout << c2;
		}
		std::cout << "." << " \033[1;32m|\033[0m ";
	} else {
		for (unsigned long i = 0; i < 10 - this->lastname.length(); i++) {
			std::cout << " ";
		}
		for (unsigned long i = 0; i < this->lastname.length(); i++) {
			c2 = this->lastname[i];
			std::cout << c2;
		}
		std::cout << " \033[1;32m|\033[0m ";
	}

	if (this->nickname.length() >= 10) {
		for (int i = 0; i < 9; i++) {
			c3 = this->nickname[i];
			std::cout << c3;
		}
		std::cout << "." << " \033[1;32m|\033[0m ";
	} else {
		for (unsigned long i = 0; i < 10 - this->nickname.length(); i++) {
			std::cout << " ";
		}
		for (unsigned long i = 0; i < this->nickname.length(); i++) {
			c3 = this->nickname[i];
			std::cout << c3;
		}
		std::cout << " \033[1;32m|\033[0m ";
	}

	std::cout << std::endl;
}

void	Contact::print_full_contact() {
	std::cout << "-------------- \033[1;32mCONTACT ";
	std::cout << this->index << "\033[0m --------------" << std::endl;
	std::cout << std::endl;

	std::cout << "First name\t: " << this->firstname << std::endl;
	std::cout << "Last name\t: " << this->lastname << std::endl;
	std::cout << "nick name\t: " << this->nickname << std::endl;
	std::cout << "Phone number\t: " << this->phonenumber << std::endl;
	std::cout << "Darkest secret\t: " << this->darkestsecret << std::endl;
	std::cout << std::endl;
}
