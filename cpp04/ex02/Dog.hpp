/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:39:32 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/01 15:00:41 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	private :
		Brain	*__dogBrain;

	public :
		Dog();
		Dog( const Dog &src );
		Dog	&operator=( const Dog &rhs );
		~Dog();

		void		makeSound( void ) const;
		std::string	getType( void ) const;
};

#endif