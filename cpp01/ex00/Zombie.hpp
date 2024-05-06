/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:26:17 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/06 16:15:55 by tamehri          ###   ########.fr       */
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
		Zombie( std::string zombie_name );
		~Zombie();
	
		void	announce( void );
};

void	randomChump( std::string name );
Zombie	*newZombie( std::string name );

#endif
