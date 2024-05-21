/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:22:10 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/21 16:06:47 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public :
		FragTrap();
		FragTrap( std::string name );
		~FragTrap();
		void	highFivesGuys( void );
};

#endif