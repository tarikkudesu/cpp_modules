/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:18:17 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/08 15:49:42 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon
{
	private :
		std::string	type;

	public :
		Weapon( std::string _type );
		~Weapon();

		const std::string &getType( void );
		void setType( std::string _newType );
};

#endif
