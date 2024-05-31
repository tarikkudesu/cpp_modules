/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:20:44 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/31 11:46:26 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :
		WrongCat();
		WrongCat( const WrongCat &src );
		WrongCat &operator=( const WrongCat &rhs );
		~WrongCat();

		void		makeSound( void ) const;
		std::string	getType( void ) const;
};

#endif
