/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 09:35:47 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/29 09:46:14 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "ICharacter.hpp"

class	Cure : public AMateria
{
	public :
		Cure();
		Cure( const Cure &src );
		Cure	&operator=( const Cure &rhs );
		~Cure();

		AMateria	*clone() const;
		void		use( ICharacter &target );
};

#endif
