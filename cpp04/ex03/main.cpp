/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 10:59:22 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/20 09:17:35 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main( void ) {

	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter	*me = new Character( "me" );

	AMateria	*tmp;
	tmp = src->createMateria( "ice" );
	me->equip(tmp);
	tmp = src->createMateria( "cure" );
	me->equip(tmp);

	ICharacter	*bob = new Character( "Jake" );

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;

	delete bob;
	delete me;
	delete src;

	{
		IMateriaSource	*src = new MateriaSource();
		src->learnMateria( new Ice() );
		src->learnMateria( new Cure() );
		src->learnMateria( new Ice() );
		src->learnMateria( new Cure() );
		AMateria	*mat = new Cure();
		src->learnMateria(mat);
		delete	mat;
	
		Character	*dur0 = new Character( "tar" );
		ICharacter	*dur1 = new Character( *dur0 );
		delete dur0;
		delete dur1;

		AMateria	*tmp;
		ICharacter	*dur2 = new Character( "tar" );
		tmp = src->createMateria( "ice" );
		dur2->equip(tmp);
		tmp = src->createMateria( "cure" );
		dur2->equip(tmp);
		tmp = src->createMateria( "Litch" );
		dur2->equip(tmp);
		delete src;

		AMateria	*cure = new Cure();
		AMateria	*ice = new Ice();
		dur2->equip( cure );
		dur2->equip( cure );
		dur2->equip( ice );
		dur2->unequip( 1 );
		dur2->unequip( 1 );
		dur2->unequip( 324 );

		ICharacter	*bob = new Character( "Fen" );
		dur2->use(3, *bob);
		dur2->use(1, *bob);
		dur2->use(2, *bob);
		dur2->use(6, *bob);
		dur2->use(34, *bob);
		dur2->use(-1233, *bob);
		delete bob;

		delete dur2;

		return (0); 
	}
}
