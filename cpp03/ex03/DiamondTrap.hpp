/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:22:00 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/03 14:42:49 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
	private :
		std::string __name;

	public :
		DiamondTrap();
		DiamondTrap( std::string const &name );	
		DiamondTrap( DiamondTrap const &src );
		~DiamondTrap();
		DiamondTrap	&operator=( DiamondTrap const &rhs );

		void	attack( const std::string &target );
		void	whoAmI( void );
};

#endif
