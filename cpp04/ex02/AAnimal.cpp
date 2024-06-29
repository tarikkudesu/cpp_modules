/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 14:59:31 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/01 14:59:40 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "\033[1;32mAAnimal Default constructor called\033[0m" << std::endl;
	this->__type = "AAnimal";
}

AAnimal::AAnimal( const AAnimal &src ) {
	std::cout << "\033[1;32mAAnimal copy constructor called\033[0m" << std::endl;
	*this = src;
}

AAnimal	&AAnimal::operator=( const AAnimal &rhs ) {
	if (this != &rhs) {
		this->__type = rhs.__type;
	}
	std::cout << "\033[1;32mAAnimal Copy assignment operator called\033[0m" << std::endl;
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << "\033[1;32mAAnimal Desctructor called\033[0m" << std::endl;
}

void	AAnimal::makeSound( void ) const {
	std::cout << "AAnimal Sound" << std::endl;
}

std::string	AAnimal::getType( void ) const {
	return this->__type;
}
