/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 17:27:54 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/30 17:37:58 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCFORM_HPP__
# define __SCFORM_HPP__

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class	ShrubberyCreationForm : public AForm
{
	public :
		ShrubberyCreationForm();
		ShrubberyCreationForm( const ShrubberyCreationForm &src );
		ShrubberyCreationForm	&operator=( const ShrubberyCreationForm &rhs );
		~ShrubberyCreationForm();
};

#endif
