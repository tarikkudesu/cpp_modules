/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:45:39 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/06 11:45:45 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void ) {
	try {
		Bureaucrat	aristotle( "aristotle", 10 );
		Bureaucrat	john( "john", 150 );

		std::cout << std::endl;

		try {
			
			PresidentialPardonForm	ppf( "trump" );
			RobotomyRequestForm		rrf( "trump" );
			ShrubberyCreationForm	scf( "trump" );

			std::cout << std::endl;

			aristotle.signForm(ppf);
			aristotle.signForm(rrf);
			aristotle.signForm(scf);
			
			std::cout << std::endl;
			
			aristotle.executeForm( ppf );
			std::cout << std::endl;
			aristotle.executeForm( scf );
			std::cout << std::endl;
			aristotle.executeForm( rrf );

		} catch ( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl;

		try {
			PresidentialPardonForm	ppf( "trump" );
			std::cout << std::endl;
			aristotle.executeForm( ppf );
		} catch ( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}

		try {
			PresidentialPardonForm	ppf( "trump" );
			std::cout << std::endl;
			john.executeForm( ppf );
		} catch ( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}

	} catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
}
