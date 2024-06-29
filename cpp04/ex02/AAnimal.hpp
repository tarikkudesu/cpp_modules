/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:39:20 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/01 14:59:18 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
	protected :
		std::string	__type;

	public :
		AAnimal();
		AAnimal( const AAnimal &src );
		virtual ~AAnimal();
		AAnimal	&operator=( const AAnimal &rhs );

		virtual void		makeSound( void ) const = 0;
		virtual std::string	getType( void ) const;
};

#endif
