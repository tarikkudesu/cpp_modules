/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:39:24 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/30 21:31:21 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "\033[1;36mCat Default constructor called\033[0m" << std::endl;
	this->__type = "cat";
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
