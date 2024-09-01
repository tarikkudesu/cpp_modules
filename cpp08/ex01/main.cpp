/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:56:27 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/27 16:56:28 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main( void ) {
	/* ************************** Empty Container ************************** */
	try {
		Span    sp(0);

		std::cout << sp.shortestSpan() << std::endl << sp.longestSpan() << std::endl;
	} catch( std::exception &e ) { std::cout << e.what() << std::endl; }

	/* ******************** Container with one element ******************** */
	try {
		Span    sp(1);

		sp.addNumber(1);
		std::cout << sp.shortestSpan() << std::endl << sp.longestSpan() << std::endl;
	} catch( std::exception &e ) { std::cout << e.what() << std::endl; }

	/* **************** adding more than the size specified **************** */
	try {
		Span    sp(1);

		sp.addNumber( 5 );
		sp.addNumber( 4 );
	} catch( std::exception &e ) { std::cout << e.what() << std::endl; }

	/* ***************************** basic test ***************************** */
	try {
		Span    sp(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl << sp.longestSpan() << std::endl;
    } catch( std::exception &e ) { std::cout << e.what() << std::endl; }

	/* ************************** 20 000 elements ************************** */
	try {
		Span    sp(20000);
	
		sp.fillContainer();
		std::cout << sp.shortestSpan() << std::endl << sp.longestSpan() << std::endl;
    } catch( std::exception &e ) { std::cout << e.what() << std::endl; }
}
