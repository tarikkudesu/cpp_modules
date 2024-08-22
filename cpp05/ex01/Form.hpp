/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:44:47 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/17 19:18:17 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
	private :
		std::string const	__name;
		bool				__isSigned;
		const int			__signGrade;
		const int			__execGrade;

	public :
		Form();
		Form( const Form &copy );
		Form( std::string const &name, int signGrade, int execGHrade );
		Form	&operator=( const Form &assign );
		~Form();

		std::string const	getName( void ) const;
		bool				getStat( void ) const;
		int					getSignGrade( void ) const;
		int					getExecGrade( void ) const;
		void				beSigned( Bureaucrat &bureacrat );

		class GradeTooHighException : public std::exception {
			public :
				const char	*__error;
				GradeTooHighException();
				GradeTooHighException( const char *error );
				virtual const char	*what( void ) const throw();
		};

		class GradeTooLowException : public std::exception {
			public :
				const char	*__error;
				GradeTooLowException();
				GradeTooLowException( const char *error );
				virtual const char	*what( void ) const throw();
		};
};

std::ostream	&operator<<( std::ostream &o, Form &rhs );

#endif