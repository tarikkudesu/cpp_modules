/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:20:34 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/21 17:22:04 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() { }

Serializer::Serializer( const Serializer &copy ) { (void) copy; }

Serializer::~Serializer() { }

Serializer	&Serializer::operator=( const Serializer &assign ) {
	(void) assign;
	return *this;
}

uintptr_t	Serializer::serialize( Data* ptr ) {
	return reinterpret_cast< uintptr_t >( ptr );
}

Data	*Serializer::deserialize( uintptr_t raw ) {
	return reinterpret_cast< Data* >( raw );
}
