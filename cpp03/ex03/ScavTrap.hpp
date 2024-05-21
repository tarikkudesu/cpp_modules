/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:52:44 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/21 16:52:27 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap( std::string name );
		// ScavTrap( ScavTrap const &src );
		~ScavTrap();
		// ScavTrap	&operator=( ScavTrap const &rhs );
		void		guardGate();
		void	function( void ) {
			std::cout << "FragTrap function" << std::endl;
		}
};

#endif