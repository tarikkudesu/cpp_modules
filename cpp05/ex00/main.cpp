/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 20:32:26 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/30 16:39:44 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void ) {

	try {

		Bureaucrat	stan( "stan", 100 );
		std::cout << stan << std::endl;
		stan.gradeUp();
		std::cout << stan << std::endl;

		Bureaucrat	bruce( "bruce" , 150);
		std::cout << bruce << std::endl;
		bruce.gradeDown();
		std::cout << bruce << std::endl;

	} catch ( const std::exception &e ) {
		std::cerr << "Error : " << e.what() << std::endl;	
	}

	try {

		Bureaucrat	stan( "stan" , 0);
		std::cout << stan << std::endl;

	} catch ( const std::exception &e ) {
		std::cerr << "Error : " << e.what() << std::endl;	
	}

	return 0;
}