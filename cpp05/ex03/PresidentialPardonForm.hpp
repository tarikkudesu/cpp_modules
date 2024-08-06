/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:46:41 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/06 11:46:42 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private :
		std::string	__target;

	public :
		PresidentialPardonForm();
		PresidentialPardonForm( std::string const target );
		PresidentialPardonForm( const PresidentialPardonForm &copy );
		PresidentialPardonForm	&operator=( const PresidentialPardonForm &assign );
		~PresidentialPardonForm();
		
		void	formAction( void ) const;
};

#endif