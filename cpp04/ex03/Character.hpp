/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 09:06:31 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/19 20:34:52 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class	Character : public ICharacter
{
	private :
		std::string	__name;
		AMateria	*__inventory[4];
		AMateria	*__trash[4];
	
	public :
		Character();
		Character( const std::string &name );
		Character( const Character &src );
		Character	&operator=( const Character &rhs );
		~Character();

		std::string const	&getName() const;
		void				equip( AMateria *m );
		void				unequip( int idx );
		void				use( int idx, ICharacter &target );
};

#endif