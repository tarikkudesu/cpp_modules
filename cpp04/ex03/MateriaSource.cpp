/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 10:48:15 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/29 12:00:46 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		this->__materias[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource &src ) {
	*this = src;
}

MateriaSource	&MateriaSource::operator=( const MateriaSource &rhs ) {
	if (this != &rhs) {
		for (int i = 0; i < 4; i++) {
			if (this->__materias[i])
				delete this->__materias[i];
		}
		for (int i = 0; i < 4; i ++)
			this->__materias[i] = rhs.__materias[i];
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (this->__materias[i])
			delete this->__materias[i];
	}
}

void	MateriaSource::learnMateria( AMateria *newMateria ) {
	for (int i = 0; i < 4; i++) {
		if (this->__materias[i] == NULL) {
			this->__materias[i] = newMateria;
			break ;
		}
	}
}

AMateria	*MateriaSource::createMateria( std::string const &type ) {
	for (int i = 0; i < 4; i++) {
		if (this->__materias[i]->getType() == type)
			return this->__materias[i]->clone();
	}
	return 0;
}
