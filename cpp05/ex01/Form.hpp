/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:44:47 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/06 11:44:48 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
	private:
		std::string const	__name;
		bool				__isSigned;
		const int			__signGrade;
		const int			__execGrade;

	public:
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

std::ostream	&operator<<( std::ostream &o, Form &rhs );

#endif