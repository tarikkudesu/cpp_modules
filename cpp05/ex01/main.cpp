/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:44:53 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/17 19:30:02 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void ) {

	try {
		Bureaucrat	aristotle( "aristotle", 10 );

		std::cout << std::endl;

		try {
			Form	sheeseBurger( "sheeseBurger", 160, 100);
		} catch ( std::exception &e ) {
			std::cerr << e.what() << std::endl;
		} std::cout << std::endl;

		try {
			Form	sheeseBurger( "sheeseBurger", 1, 100);
			std::cout << sheeseBurger << std::endl;
			aristotle.signForm(sheeseBurger);
		} catch ( std::exception &e ) {
			std::cerr << e.what() << std::endl;
		} std::cout << std::endl;

		try {
			Form	sheeseBurger( "sheeseBurger", 100, 100);
			std::cout << sheeseBurger << std::endl;
			aristotle.signForm(sheeseBurger);
			std::cout << sheeseBurger << std::endl;
			aristotle.signForm(sheeseBurger);
		} catch ( std::exception &e ) {
			std::cerr << e.what() << std::endl;
		}

	} catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
}
