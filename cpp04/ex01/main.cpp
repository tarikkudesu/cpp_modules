/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:39:35 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/20 09:12:07 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void ) {

	{
		const Animal	*j = new Dog();
		const Animal	*i = new Cat();

		delete j;
		delete i;
	}

	std::cout << std::endl;
	{
		Animal	*i = new Cat();
		Animal	*j = new Cat();

		*i = *j;

		delete i;
		delete j;
	}

	std::cout << std::endl;

	Animal	*animals[8];

	for (int i = 0; i < 8; i++) {
		std::cout << "---------------" << i + 1 << "---------------" << std::endl;
		if (i < 4)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	std::cout << std::endl;

	for (int i = 0; i < 8; i++) {
		std::cout << "---------------" << 8 - i << "---------------" << std::endl;
		delete animals[i];
	}
	return 0;
}
