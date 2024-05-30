/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:39:17 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/30 21:31:17 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "\033[1;32mAnimal Default constructor called\033[0m" << std::endl;
	this->__type = "Animal";
}

Animal::~Animal() {
	std::cout << "\033[1;32mAnimal Desctructor called\033[0m" << std::endl;
}

Animal::Animal( const Animal &src ) {
	std::cout << "\033[1;32mAnimal copy constructor called\033[0m" << std::endl;
	*this = src;
}

Animal	&Animal::operator=( const Animal &rhs ) {
	std::cout << "\033[1;32mAnimal Copy assignment operator called\033[0m" << std::endl;
	if (this != &rhs) {
		this->__type = rhs.__type;
	}
	return *this;
}

void	Animal::makeSound( void ) const {
	std::cout << "Animal Sound" << std::endl;
}

std::string	Animal::getType( void ) const {
	return this->__type;
}
