/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 09:59:24 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/01 14:09:43 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
# define __FORM_HPP__

# include "Bureaucrat.hpp"

class	AForm
{
	private :
		std::string const	__name;
		bool				__isSigned;
		int const			__execGrade;
		int const			__signGrade;

	public :
		AForm();
		AForm( const std::string &name );
		AForm( const std::string &name, int exec, int sign );
		AForm( const AForm &src );
		AForm	&operator=(const AForm &rhs );
		~AForm();

		class	GradeTooHighException {};
		class	GradeTooLowException {};
		
		std::string	getName( void ) const ;
		bool		getStat( void ) const ;
		int			getExecGrade( void ) const ;
		int			getSignGrade( void ) const ;
		void		beSigned( const Bureaucrat &bureaucrat );
};

std::ostream	&operator<<( std::ostream &o, const AForm &form );

#endif
