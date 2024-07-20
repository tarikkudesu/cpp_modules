/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:20:15 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/20 09:06:13 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "\033[1;31mWrongCat Default constructor called\033[0m" << std::endl;
	this->__type = "Wrongcat";
}

WrongCat::WrongCat( const WrongCat &src ) : WrongAnimal( src ) {
	std::cout << "\033[1;36mWrongCat copy constructor called\033[0m" << std::endl;
}

WrongCat &WrongCat::operator=( const WrongCat &rhs ) {
	if (this != &rhs)
		WrongAnimal::operator=( rhs );
	std::cout << "\033[1;36mWrongCat Copy assignment operator called\033[0m" << std::endl;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "\033[1;31mWrongCat Desctructor called\033[0m" << std::endl;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "Meaooooo" << std::endl;
}

std::string	WrongCat::getType( void ) const {
	return	this->__type;
}
