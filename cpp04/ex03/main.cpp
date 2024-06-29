/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 10:59:22 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/29 11:57:42 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void f() { system("leaks materia"); }

int main()
{
atexit(f);
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter	*me = new Character( "me" );
	AMateria	*tmp;

	tmp = src->createMateria( "ice" );
	me->equip(tmp);
	delete tmp;
	tmp = src->createMateria( "cure" );
	me->equip(tmp);

	ICharacter	*bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete	tmp;
	delete	me;
	delete	bob;
	delete	src;

	return 0;
}