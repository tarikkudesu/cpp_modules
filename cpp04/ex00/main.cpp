/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:39:35 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/30 21:38:09 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	const Cat		*k = new Cat();
	const Dog		*l = new Dog();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();
	k->makeSound();
	l->makeSound();


	delete	meta;
	delete	j;
	delete	i;
	delete	k;
	delete	l;

	return 0;
}