/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 10:40:30 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/29 11:40:45 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERISSOURCE_HPP
# define MATERISSOURCE_HPP

# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	private :
		AMateria	*__materias[4];
	
	public :
		MateriaSource();
		MateriaSource( const MateriaSource &src );
		MateriaSource	&operator=( const MateriaSource &rhs );
		~MateriaSource();

		void		learnMateria(AMateria*);
		AMateria	*createMateria(std::string const & type);
};

#endif
