/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:22:02 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/07 14:37:39 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private :
		std::string	name;

	public :
		Zombie() : name("zombie") {}
		Zombie( std::string zombie_name );
		~Zombie();
	
		void	announce( void );
};

Zombie	*zombieHorde( int N, std::string name );

#endif
