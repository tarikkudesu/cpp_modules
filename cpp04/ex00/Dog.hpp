/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:39:32 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/31 11:31:17 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public :
		Dog();
		Dog( const Dog &src );
		Dog	&operator=( const Dog &rhs );
		~Dog();

		void		makeSound( void ) const;
		std::string	getType( void ) const;
};

#endif