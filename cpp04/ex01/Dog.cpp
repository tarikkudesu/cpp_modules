/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:39:30 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/31 12:08:14 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "\033[1;33mDog Default constructor called\033[0m" << std::endl;
	this->__type = "Dog";
	this->__dogBrain = new Brain("Dog is thinkng about cats");
}

Dog::Dog( const Dog &src ) : Animal(src) {
	std::cout << "\033[1;33mDog copy constructor called\033[0m" << std::endl;
}

Dog	&Dog::operator=( const Dog &rhs ) {
	if (this != &rhs) {
		Animal::operator=( rhs );
	}
	std::cout << "\033[1;33mDog Copy assignment operator called\033[0m" << std::endl;
	return *this;
}

Dog::~Dog() {
	std::cout << "\033[1;33mDog Desctructor called\033[0m" << std::endl;
	delete this->__dogBrain;
}

void	Dog::makeSound( void ) const {
	std::cout << "Bark" << std::endl;
}

std::string	Dog::getType( void ) const {
	return	this->__type;
}
