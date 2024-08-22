/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:20:30 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/21 17:20:31 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main( void ) {
	Data		*me = new Data;
	Data		*newMe;
	uintptr_t	raw;

	std::cout << "Original pointer : " << me << std::endl;
	raw = Serializer::serialize( me );
	std::cout << "Integer version : " << raw << std::endl;
	newMe = Serializer::deserialize( raw );
	std::cout << "pointer after serialization : " << newMe << std::endl;

	delete	me;
}
