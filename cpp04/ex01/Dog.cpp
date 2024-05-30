/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:39:30 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/30 21:31:31 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "\033[1;33mDog Default constructor called\033[0m" << std::endl;
	this->__type = "Dog";
}

Dog::~Dog() {
	std::cout << "\033[1;33mDog Desctructor called\033[0m" << std::endl;
}

void	Dog::makeSound( void ) const {
	std::cout << "Bark" << std::endl;
}

std::string	Dog::getType( void ) const {
	return	this->__type;
}
