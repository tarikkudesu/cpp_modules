/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:59:46 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/01 16:45:39 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public :
		ScavTrap();
		~ScavTrap();
		ScavTrap( const ScavTrap &src );
		ScavTrap	&operator=( const ScavTrap &rhs );
		ScavTrap( std::string name );

		void	attack( const std::string &target );
		void	guardGate( void );
};

#endif
