/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:39:35 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/20 09:10:36 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void ) {

	std::cout << "---- Virtual Functions are used ----" << std::endl << std::endl;
	const Animal	*meta = new Animal();
	const Animal	*i = new Cat();
	const Animal	*j = new Dog();
	const Cat		*k = new Cat();
	const Dog		*l = new Dog();

	std::cout << i->getType() << std::endl;
	std::cout << j->getType() << std::endl;
	std::cout << k->getType() << std::endl;
	std::cout << l->getType() << std::endl;
	std::cout << meta->getType() << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();
	k->makeSound();
	l->makeSound();

	delete	l;
	delete	k;
	delete	i;
	delete	j;
	delete	meta;

	std::cout << std::endl << "---- Virtual Functions are not used ----" << std::endl << std::endl;
	
	const WrongAnimal	*m = new WrongCat();

	std::cout << m->getType() << " " << std::endl;
	m->makeSound();

	delete m;

	return 0;
}
