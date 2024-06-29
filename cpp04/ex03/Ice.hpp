/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 08:52:36 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/29 09:46:20 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "ICharacter.hpp"

class	Ice : public AMateria
{
	private :
		std::string	__name;

	public :
		Ice();
		Ice( const Ice &src );
		Ice	&operator=( const Ice &rhs );
		~Ice();

		AMateria	*clone() const;
		void		use( ICharacter &target );
};

#endif
