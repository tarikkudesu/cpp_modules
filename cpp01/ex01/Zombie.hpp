/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:22:02 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/27 08:11:49 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	private :
		std::string	__name;

	public :
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );

		void	announce( void );
};

Zombie	*newZombie( std::string name );
void 	randomChump( std::string name );
Zombie	*zombieHorde( int N, std::string name );

#endif
