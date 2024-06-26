/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 16:33:37 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/16 16:52:06 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	
}

Harl::~Harl() {
	
}

void	Harl::debug( void ) {
	std::cout << "[\033[1;32m DEBUG \033[0m]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
	std::cout << std::endl << std::endl;
}

void	Harl::info( void ) {

}

void	Harl::warning( void ) {
	std::cout << "[\033[1;32m WARNING \033[0m]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl \
				<< "I’ve been coming for years whereas you started working here since last month.";
	std::cout << std::endl << std::endl;
}

void	Harl::error( void ) {
	std::cout << "[\033[1;32m ERROR \033[0m]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl << std::endl;
}

void	Harl::complain( std::string level ) {
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = 0;
	while (i < 4 && level.compare(levels[i]))
		i++;
	switch (i) {
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
		break ;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;			
	}
}
