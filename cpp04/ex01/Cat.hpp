/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:39:27 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/19 18:21:13 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	private :
		Brain	*__catBrain;

	public :
		Cat();
		Cat( const Cat &src );
		Cat &operator=( const Cat &rhs );
		~Cat();

		void		makeSound( void ) const;
		std::string	getType( void ) const;
};

#endif