/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:20:59 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/24 12:43:47 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

int rand( void ) {
	uintptr_t	add = reinterpret_cast< uintptr_t >(&rand);
	return add % 3;
}

Base	*generate( void ) {
	switch ( rand() ) {
		case 0:
			std::cout << "A" << "\n";
			return new	A();
		case 1:
			std::cout << "B" << "\n";
			return new	B();
		case 2:
			std::cout << "C" << "\n";
			return new	C();
	}
	return NULL;
}
