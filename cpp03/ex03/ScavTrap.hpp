/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:59:46 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/05 10:18:12 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap( std::string const &name );
		ScavTrap( const ScavTrap &src );
		~ScavTrap();
		ScavTrap	&operator=( const ScavTrap &rhs );

		void	attack( const std::string &target );
		void	guardGate( void );
};

#endif
