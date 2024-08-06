/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:46:26 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/06 12:14:41 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {

}

Intern::Intern( const Intern &copy ) {
	(void) copy;
}

Intern::~Intern() {

}

Intern	&Intern::operator=( const Intern &assign ) {
	(void) assign;
	return *this;
}

AForm	*Intern::makeForm( std::string const formName, std::string const targetName ) const {
	AForm	*form;
	formName == "robotomy request" ? (form = new RobotomyRequestForm( targetName )) \
		: (formName == "presidential pardon" ? (form = new PresidentialPardonForm( targetName )) \
		: (formName == "shrubbery creation pardon" ? (form = new ShrubberyCreationForm( targetName )) : form = NULL));
	if (form == NULL)
		throw FormException();
	return form;
}

const char	*Intern::FormException::what( void ) const throw() { return "\033[0;31mIntern failed to create the Form\033[0m"; }
