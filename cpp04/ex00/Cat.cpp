/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:39:24 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/19 15:48:36 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	this->__type = "Cat";
	std::cout << "\033[1;36mCat Default constructor called\033[0m" << std::endl;
}

Cat::Cat( const Cat &src ) : Animal( src ) {
	std::cout << "\033[1;36mCat copy constructor called\033[0m" << std::endl;
}

Cat &Cat::operator=( const Cat &rhs ) {
	if (this != &rhs)
		Animal::operator=( rhs );
	std::cout << "\033[1;36mCat Copy assignment operator called\033[0m" << std::endl;
	return *this;
}

Cat::~Cat() {
	std::cout << "\033[1;36mCat Desctructor called\033[0m" << std::endl;
}

void	Cat::makeSound( void ) const {
	std::cout << "Meeaaaaaawww" << std::endl;
}

std::string	Cat::getType( void ) const {
	return	this->__type;
}
