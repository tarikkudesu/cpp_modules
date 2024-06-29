/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:11:00 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/23 15:15:04 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int	Contact::__nbContacts = 0;

Contact::Contact( void ) {
	__index = __nbContacts + 1;
	__nbContacts++;
}

Contact::~Contact( void ) {

}

void	Contact::set_index( int i ) {
	this->__index = i;
}

void	Contact::new_contact( void ) {
	std::cout << "first name\t: ";
	std::getline(std::cin, this->__firstname);
	if (std::cin.eof() || std::cin.fail())
		return ;

	std::cout << "last name\t: ";
	std::getline(std::cin, this->__lastname);
	if (std::cin.eof() || std::cin.fail())
		return ;

	std::cout << "nick name\t: ";
	std::getline(std::cin, this->__nickname);
	if (std::cin.eof() || std::cin.fail())
		return ;

	std::cout << "phone number\t: ";
	std::getline(std::cin, this->__phonenumber);
	if (std::cin.eof() || std::cin.fail())
		return ;

	std::cout << "darkest secret\t: ";
	std::getline(std::cin, this->__darkestsecret);
	if (std::cin.eof() || std::cin.fail())
		return ;
}

void	Contact::print_feild( std::string feild ) {
	if (feild.length() <= 10) {
		for (size_t i = 0; i < 10 - feild.length(); i++)
			std::cout << " ";
		std::cout << feild;
	} else {
		for (size_t i = 0; i < 9; i++)
			std::cout << feild.at(i);
		std::cout << ".";
	}
}

void	Contact::display_contact( void ) {
	std::cout << "\t[" << this->__index << "] | ";
	this->print_feild(this->__firstname);
	std::cout << " | ";
	this->print_feild(this->__lastname);
	std::cout << " | ";
	this->print_feild(this->__nickname);
	std::cout << std::endl;

}

void	Contact::display_full_contact( void ) {
	std::cout << "\033[1;32m████████████████████████ CONTACT " << this->__index << " ████████████████████████\033[0m" << std::endl << std::endl;
	std::cout << std::endl << "\tfirst name\t: \033[1;32m" << __firstname << std::endl \
				<< "\t\033[0mlast name\t: \033[1;32m" << __lastname << std::endl \
				<< "\t\033[0mnick name\t: \033[1;32m" << __nickname << std::endl \
				<< "\t\033[0mphone number\t: \033[1;32m" << __phonenumber << std::endl \
				<< "\t\033[0mdarckest secret\t: \033[1;32m" << __darkestsecret << std::endl \
				<< "\033[0m" << std::endl << std::endl;
}
