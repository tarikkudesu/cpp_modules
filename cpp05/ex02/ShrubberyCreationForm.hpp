/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:46:12 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/06 11:46:13 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	__target;
		
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm( std::string const target );
		ShrubberyCreationForm( const ShrubberyCreationForm &copy );
		ShrubberyCreationForm	&operator=( const ShrubberyCreationForm &assign );
		~ShrubberyCreationForm();
		
		void	formAction( void ) const ;
};

#endif