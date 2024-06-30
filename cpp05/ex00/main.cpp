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
	Bureaucrat	stan( "stan" );
	Bureaucrat	bruce( "bruce" );

	std::cout << stan;
	try {
		stan.gradeDown();
	} catch (Bureaucrat::GradeTooLowException) {
		std::cout << stan.getName() << " : already the lowest grade possible" << std::endl;	
	}

	std::cout << bruce;
	for (int i = 0; i < 150; i++) {
		try {
			bruce.gradeUp();
		} catch (Bureaucrat::GradeTooHighException) {
			std::cout << stan.getName() << " : already the highest grade possible" << std::endl;
		}
	}
}
