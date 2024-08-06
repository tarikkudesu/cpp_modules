/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:46:29 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/06 12:14:49 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern( const Intern &copy );
		Intern	&operator=( const Intern &assign );
		~Intern();

		AForm	*makeForm( std::string const formName, std::string const targetName ) const;

		class FormException : public std::exception {
			virtual const char	*what( void ) const throw();
		};
};

#endif