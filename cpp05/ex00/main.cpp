/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:44:10 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/06 18:38:32 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void ) {

	try {
		Bureaucrat	aristotle( "aristotle", 150 );
		std::cout << aristotle << std::endl;
		aristotle.gradeUp();
		std::cout << aristotle << std::endl;
		aristotle.gradeDown();
		std::cout << aristotle << std::endl;
		aristotle.gradeDown();
		std::cout << aristotle << std::endl;
	} catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat	john( "john", 1 );
		std::cout << john << std::endl;
		john.gradeUp();
		std::cout << john << std::endl;
		john.gradeUp();
	} catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
		
	std::cout << std::endl;

	try {
		Bureaucrat	Socrates( "Socrates", 1700 );
	} catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
}
