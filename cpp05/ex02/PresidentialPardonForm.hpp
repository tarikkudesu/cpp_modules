/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 17:25:49 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/30 17:39:25 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PPFORM_HPP__
# define __PPFORM_HPP__

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class	PresidentialPardonForm : public AForm
{
	public :
		PresidentialPardonForm();
		PresidentialPardonForm( const PresidentialPardonForm &src );
		PresidentialPardonForm	&operator=( const PresidentialPardonForm &rhs );
		~PresidentialPardonForm();
};

#endif
