/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 09:02:34 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/29 11:32:13 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include "AMateria.hpp"

class	ICharacter
{
	public :
		virtual ~ICharacter();

		virtual std::string const	&getName() const = 0;
		virtual void				equip( AMateria *m ) = 0;
		virtual void				unequip( int idx ) = 0;
		virtual void				use( int idx, ICharacter &target ) = 0;
};

#endif
