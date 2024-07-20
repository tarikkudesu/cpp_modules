/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:39:20 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/20 09:02:13 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Brain.hpp"

class Animal
{
	protected :
		std::string	__type;

	public :
		Animal();
		Animal( const Animal &src );
		Animal	&operator=( const Animal &rhs );
		virtual ~Animal();

		virtual void		makeSound( void ) const;
		virtual std::string	getType( void ) const;
};

#endif
