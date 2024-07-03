/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:19:35 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/03 12:28:50 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{
	private :
		std::string		__name;
		unsigned int	__HitPoints;
		unsigned int	__EnergyPoints;
		unsigned int	__AttackDamage;

	public :
		ClapTrap();
		ClapTrap( std::string const &name );
		ClapTrap( const ClapTrap &src );
		~ClapTrap();
		ClapTrap	&operator=( const ClapTrap &rhs );
		
		void		attack( const std::string& target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );
};

#endif
