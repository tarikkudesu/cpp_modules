/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:46:26 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/19 12:50:56 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() { }

Intern::Intern( const Intern &copy ) {
	(void) copy;
}

Intern::~Intern() { }

Intern	&Intern::operator=( const Intern &assign ) {
	(void) assign;
	return *this;
}

AForm	*Intern::makeForm( std::string const formName, std::string const targetName ) const {
	int idx = 0;
	std::string	formNames[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	for ( ; idx < 3; idx++) {
		if (!formName.compare( formNames[idx] ))
			break ;
	}
	switch (idx) {
		case 0:
			return new PresidentialPardonForm( targetName );
		case 1:
			return new RobotomyRequestForm( targetName );
		case 2:
			return new ShrubberyCreationForm( targetName );
		default:
			throw FormException();
	}
	return NULL;
}

const char	*Intern::FormException::what( void ) const throw() { return "\033[0;31mIntern failed to create the Form\033[0m"; }
