/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:20:36 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/21 17:20:37 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include "Data.hpp"

class Serializer
{
	private :
		Serializer();

	public:
		Serializer( const Serializer &copy );
		Serializer	&operator=( const Serializer &assign );
		~Serializer();

		static uintptr_t	serialize( Data *ptr );
		static Data			*deserialize( uintptr_t raw );
};

#endif
