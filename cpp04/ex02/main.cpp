/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:39:35 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/20 09:14:08 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main( void ) {

	// AAnimal	*l = new	Animal();
	{
		const AAnimal	*j = new Dog();
		const AAnimal	*i = new Cat();

		delete j;
		delete i;
	}
	std::cout << std::endl;
	{
		AAnimal	*i = new Cat();
		AAnimal	*j = new Cat();

		*i = *j;

		delete i;
		delete j;
	}
	return 0;
}
