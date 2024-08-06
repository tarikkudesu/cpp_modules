/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:45:12 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/06 12:16:10 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class AForm
{
	private:
		std::string const	__name;
		bool				__isSigned;
		const int			__signGrade;
		const int			__execGrade;

	public:
		AForm();
		AForm( const AForm &copy );
		AForm( std::string const &name, int signGrade, int execGHrade );
		AForm	&operator=( const AForm &assign );
		virtual ~AForm();

		std::string const	getName( void ) const;
		bool				getStat( void ) const;
		int					getSignGrade( void ) const;
		int					getExecGrade( void ) const;
		void				beSigned( Bureaucrat &bureaucrat );
		void				execute( Bureaucrat const &bureaucrat ) const;
		virtual void		formAction( void ) const = 0;

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

std::ostream	&operator<<( std::ostream &o, AForm &rhs );

#endif