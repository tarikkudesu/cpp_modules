/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 21:45:54 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/31 12:03:37 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"

class Brain
{
	private :
		std::string	__ideas[100];
		
	public :
		Brain();
		Brain( std::string idea );
		Brain( const Brain &src );
		Brain	&operator=( const Brain &rhs );
		~Brain();

		void	displayIdeas( void ) const;
};

#endif