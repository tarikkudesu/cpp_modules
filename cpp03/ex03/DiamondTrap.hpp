/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:24:58 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/21 16:57:08 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/*--------------------------- multiple Inheritance ---------------------------*/
class DiamondTrap : public ScavTrap, public FragTrap
{
	private :
		std::string	__name;

	public :
		DiamondTrap();
		DiamondTrap( std::string name );
		~DiamondTrap();
};

#endif
