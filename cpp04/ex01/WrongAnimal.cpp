/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:19:00 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/19 15:53:48 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "\033[1;31mWrongAnimal Default constructor called\033[0m" << std::endl;
	this->__type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( const WrongAnimal &src ) {
	std::cout << "\033[1;31mWrongAnimal copy constructor called\033[0m" << std::endl;
	*this = src;
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &rhs ) {
	std::cout << "\033[1;31mWrongAnimal Copy assignment operator called\033[0m" << std::endl;
	if (this != &rhs)
		this->__type = rhs.__type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "\033[1;31mWrongAnimal Desctructor called\033[0m" << std::endl;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal Sound" << std::endl;
}

std::string	WrongAnimal::getType( void ) const {
	return this->__type;
}
