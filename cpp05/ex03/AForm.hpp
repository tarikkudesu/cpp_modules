/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:46:18 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/06 11:46:19 by tamehri          ###   ########.fr       */
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
			private :
				const char	*__error;
			public :
				GradeTooHighException() : __error( "\033[0;31mgrade is too high!!\033[0m" ) { }
				GradeTooHighException( const char *error ) : __error( error ) { }
				virtual const char	*what( void ) const throw() { return __error; }
		};

		class GradeTooLowException : public std::exception {
			private :
				const char	*__error;
			public :
				GradeTooLowException() : __error( "\033[0;31mgrade is too low!!\033[0m" ) { }
				GradeTooLowException( const char *error ) : __error( error ) { }
				virtual const char	*what( void ) const throw() { return __error; }
		};
};

std::ostream	&operator<<( std::ostream &o, AForm &rhs );

#endif