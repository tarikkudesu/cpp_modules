/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:17:59 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/31 10:46:03 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected :
		std::string	__type;

	public :
		WrongAnimal();
		WrongAnimal( const WrongAnimal &src );
		~WrongAnimal();
		WrongAnimal	&operator=( const WrongAnimal &rhs );

		void		makeSound( void ) const;
		std::string	getType( void ) const;
};

#endif
