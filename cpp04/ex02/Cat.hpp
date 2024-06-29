/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:39:27 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/23 13:57:37 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
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