/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:20:59 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/22 19:23:21 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

int rand( void ) {
	uintptr_t	add = reinterpret_cast<uintptr_t>(&rand);
	return add % 3;
}

Base	*generate( void ) {
	Base	*ptr;

	switch (rand()) {
		case 0:
			ptr = new	A();
			std::cout << "A" << "\n";
			break ;
		case 1:
			std::cout << "B" << "\n";
			ptr = new	B();
			break ;
		case 2:
			std::cout << "C" << "\n";
			ptr = new	C();
			break ;
	}
	return ptr;
}
