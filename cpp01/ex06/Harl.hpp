/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 16:32:44 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/11 17:10:38 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class	Harl
{
	private :		
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

	public :
		Harl();
		~Harl();

		void	complain( std::string level );
};

#endif