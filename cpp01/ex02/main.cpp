/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:30:28 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/06 17:49:55 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void ) {
	std::string	brain = "HI THIS IS BRAIN";

	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << "address of the string\t: " << &brain << std::endl; 
	std::cout << "address of stringPTR\t: " << stringPTR << std::endl;
	std::cout << "address of stringREF\t: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "value of the string\t: " << brain << std::endl; 
	std::cout << "value of stringPTR\t: " << *stringPTR << std::endl;
	std::cout << "value of stringREF\t: " << stringREF << std::endl;
}