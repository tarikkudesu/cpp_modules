/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:39:24 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/31 20:23:06 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "\033[1;36mCat Default constructor called\033[0m" << std::endl;
	this->__type = "cat";
	this->__catBrain = new Brain("cat is thinking about killing all humanity");
}

Cat::Cat( const Cat &src ) : Animal(src) {
	std::cout << "\033[1;36mCat copy constructor called\033[0m" << std::endl;
	*this = src;
}

Cat &Cat::operator=( const Cat &rhs ) {
	if (this != &rhs) {
		
	}
	std::cout << "\033[1;36mCat Copy assignment operator called\033[0m" << std::endl;
	return *this;
}

Cat::~Cat() {
	std::cout << "\033[1;36mCat Desctructor called\033[0m" << std::endl;
	delete this->__catBrain;
}

void	Cat::makeSound( void ) const {
	std::cout << "Meaooooo" << std::endl;
}

std::string	Cat::getType( void ) const {
	return	this->__type;
}
