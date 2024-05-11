/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:47:41 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/11 16:14:47 by tamehri          ###   ########.fr       */
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