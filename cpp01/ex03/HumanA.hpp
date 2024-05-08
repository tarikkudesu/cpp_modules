/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:13:07 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/08 16:01:17 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{
	private :
		std::string	name;
		Weapon		&weapon;
	
	public :
		HumanA( std::string _name, Weapon &_weapon );
		~HumanA();
		void	attack();
};

#endif
