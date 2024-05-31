/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 21:46:23 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/31 20:10:10 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "\033[1;35mBrain Default constructor called\033[0m" << std::endl;
	for (int i = 0; i < 100; i++)
		this->__ideas[i] = "no idea";
}

Brain::Brain( std::string idea ) {
	std::cout << "\033[1;35mBrain string constructor called\033[0m" << std::endl;
	for (int i = 0; i < 100; i++)
		this->__ideas[i] = idea;
}

Brain::Brain( const Brain &src ) {
	std::cout << "\033[1;35mBrain copy constructor called\033[0m" << std::endl;
	*this = src;
}

Brain	&Brain::operator=( const Brain &rhs ) {
	if (this != &rhs) {
		for (int i = 0; i < 100; i++)
			this->__ideas[i] = rhs.__ideas[i];
	}
	std::cout << "\033[1;35mBrain Copy assignment operator called\033[0m" << std::endl;
	return *this;
}

Brain::~Brain() {
	std::cout << "\033[1;35mBrain Desctructor called\033[0m" << std::endl;
}

void	Brain::displayIdeas( void ) const {
	for (int i = 0; i < 100; i++)
		std::cout << this->__ideas[i] << std::endl;
}
