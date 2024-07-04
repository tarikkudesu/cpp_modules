/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:03:56 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/04 11:27:58 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public :
		FragTrap();
		FragTrap( std::string const &name );
		FragTrap( const FragTrap &src );
		~FragTrap();
		FragTrap	&operator=( FragTrap const &rhs );

		void	highFivesGuys( void );
};

#endif
