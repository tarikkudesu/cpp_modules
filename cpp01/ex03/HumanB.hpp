/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:18:09 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/08 16:17:46 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	private :
		std::string	name;
		Weapon		*weapon;
	
	public :
		HumanB( std::string _name );
		~HumanB();

		void	setWeapon( Weapon &_weapon );
		void	attack();
};

#endif
