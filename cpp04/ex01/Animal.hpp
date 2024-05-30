/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:39:20 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/30 21:40:31 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected :
		std::string	__type;

	public :
		Animal();
		Animal( const Animal &src );
		virtual ~Animal();
		Animal	&operator=( const Animal &rhs );

		virtual void		makeSound( void ) const;
		virtual std::string	getType( void ) const;
};

#endif
