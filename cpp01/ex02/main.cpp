/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:30:28 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/07 15:42:49 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void ) {
	std::string brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;
	
	std::cout << "Adress of brain\t\t: " << &brain << std::endl;
	std::cout << "Adress of stringPTR\t: " << stringPTR << std::endl;
	std::cout << "Adress of stringREF\t: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Value of brain\t\t: " << brain << std::endl;
	std::cout << "Value of stringPTR\t: " << *stringPTR << std::endl;
	std::cout << "Value of stringREF\t: " << stringREF << std::endl;
}
