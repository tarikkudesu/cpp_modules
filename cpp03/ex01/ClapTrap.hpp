/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:06:59 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/21 16:04:27 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	protected :
		std::string		__name;
		unsigned int	__HitPoints;
		unsigned int	__EnergyPoints;
		unsigned int	__AttackDamage;

	public :
		ClapTrap();
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const &src );
		~ClapTrap();
		ClapTrap	&operator=( ClapTrap const &rhs );

		void	attack( const std::string &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};

#endif
