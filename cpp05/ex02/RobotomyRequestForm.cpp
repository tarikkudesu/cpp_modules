/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:46:02 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/06 11:46:03 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm( "RobotomyRequestForm", 72, 45 ) {
	std::cout << "Form type : RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string const target ) : AForm( "RobotomyRequestForm", 72, 45 ), __target( target ) {
	std::cout << "Form type : RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &copy ) : AForm( copy ) {

}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm	&RobotomyRequestForm::operator=( const RobotomyRequestForm &assign ) {
	if (this != &assign) {
		AForm::operator=( assign );
		this->__target = assign.__target;
	}
	return *this;
}

void	RobotomyRequestForm::formAction( void ) const {
	int	rand;

	rand = (long)&rand % 10;
	std::cout << "██▓▓▓▓▓▓▒▒▓▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓░░▒▒▓▓▒▒▓▓░░▒▒▓▓▓▓▓▓" << std::endl;
	std::cout << "▓▓▓▓▓▓▓▓▒▒▓▓▓▓░░▓▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▓▓▒▒▒▒▓▓▒▒▒▒▓▓░░" << std::endl;
	std::cout << "▓▓▒▒▓▓░░▒▒▓▓▓▓▓▓▓▓▒▒▒▒▓▓▒▒▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▒▒▓▓▒▒▒▒▒▒▒▒" << std::endl;
	std::cout << "░░██▓▓▒▒░░▓▓▒▒▓▓▓▓▓▓▒▒▓▓▒▒▓▓▓▓▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒░░▒▒▓▓░░" << std::endl;
	std::cout << "▓▓▓▓▓▓▓▓░░▒▒▒▒▓▓▒▒▓▓▒▒▓▓▒▒▒▒▓▓▒▒▒▒▓▓▒▒▒▒▒▒░░▒▒▒▒▒▒░░▓▓▓▓" << std::endl;
	if (rand < 5)
		std::cout << this->__target << " has been robotomized successfully" << std::endl;
	else
		throw GradeTooHighException( "\033[0;31mRobotomization failed misrably\033[0m" );
}
