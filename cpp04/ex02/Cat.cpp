/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:39:24 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/01 15:00:01 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "\033[1;36mCat Default constructor called\033[0m" << std::endl;
	this->__type = "cat";
	this->__catBrain = new Brain( "cat is thinking about killing all humanity" );
}

Cat::Cat( const Cat &src ) : AAnimal(src) {
	std::cout << "\033[1;36mCat copy constructor called\033[0m" << std::endl;
	__catBrain = new Brain( *src.__catBrain );
}

Cat &Cat::operator=( const Cat &rhs ) {
	if (this != &rhs) {
		delete this->__catBrain;
		this->__catBrain = new Brain( *rhs.__catBrain );
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
