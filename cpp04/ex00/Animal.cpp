/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:39:17 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/31 11:45:11 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "\033[1;32mAnimal Default constructor called\033[0m" << std::endl;
	this->__type = "Animal";
}

Animal::Animal( const Animal &src ) {
	std::cout << "\033[1;32mAnimal copy constructor called\033[0m" << std::endl;
	*this = src;
}

Animal	&Animal::operator=( const Animal &rhs ) {
	if (this != &rhs) {
		this->__type = rhs.__type;
	}
	std::cout << "\033[1;32mAnimal Copy assignment operator called\033[0m" << std::endl;
	return *this;
}

Animal::~Animal() {
	std::cout << "\033[1;32mAnimal Desctructor called\033[0m" << std::endl;
}

void	Animal::makeSound( void ) const {
	std::cout << "Animal Sound" << std::endl;
}

std::string	Animal::getType( void ) const {
	return this->__type;
}
