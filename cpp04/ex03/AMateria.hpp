/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 08:34:26 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/29 09:55:50 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class	ICharacter;

class AMateria
{
	protected :
		std::string	__type;

	public :
		AMateria();
		AMateria( std::string const &type );
		AMateria( const AMateria &src );
		AMateria	&operator=( const AMateria &rhs );
		virtual ~AMateria();

		std::string const	&getType() const;
		virtual AMateria	*clone() const;
		virtual void		use( ICharacter &target );
};

#endif
