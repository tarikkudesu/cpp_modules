/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 20:32:26 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/30 17:17:42 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main( void ) {
	Bureaucrat	me( "Rick" );
	Form		birth( "Birth" );

	std::cout << me << std::endl;
	me.signForm( birth );
	std::cout << birth << std::endl;

	try {
		for (int i = 0; i < 100; i++)
			me.gradeUp();
	} catch (Bureaucrat::GradeTooHighException) {
		std::cout << me.getName() << " : already the highest grade possible" << std::endl;
	}
	
	std::cout << me << std::endl;
	me.signForm( birth );
	std::cout << birth << std::endl;

}
