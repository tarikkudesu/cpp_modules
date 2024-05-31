/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:39:24 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/31 11:45:24 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "\033[1;36mCat Default constructor called\033[0m" << std::endl;
	this->__type = "cat";
}

Cat::Cat( const Cat &src ) : Animal(src) {
	std::cout << "\033[1;36mCat copy constructor called\033[0m" << std::endl;
}

Cat &Cat::operator=( const Cat &rhs ) {
	if (this != &rhs) {
		Animal::operator=( rhs );
	}
	std::cout << "\033[1;36mCat Copy assignment operator called\033[0m" << std::endl;
	return *this;
}

Cat::~Cat() {
	std::cout << "\033[1;36mCat Desctructor called\033[0m" << std::endl;
}

void	Cat::makeSound( void ) const {
	std::cout << "Meaooooo" << std::endl;
}

std::string	Cat::getType( void ) const {
	return	this->__type;
}
