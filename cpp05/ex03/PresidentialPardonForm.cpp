/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:46:38 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/17 19:25:34 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm( "PresidentialPardonForm", 145, 137 ) {
	std::cout << "Form type : PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string const target ) : AForm( "PresidentialPardonForm", 145, 137 ), __target( target ) {
	std::cout << "Form type : PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &copy ) : AForm( copy ) { }

PresidentialPardonForm::~PresidentialPardonForm() { }

PresidentialPardonForm	&PresidentialPardonForm::operator=( const PresidentialPardonForm &assign ) {
	if (this != &assign) {
		AForm::operator=( assign );
		this->__target = assign.__target;
	}
	return *this;
}

void	PresidentialPardonForm::formAction( void ) const {
	std::cout << this->__target << " has been pardoned by Zaphod Beeblebroxt" << std::endl;
}
