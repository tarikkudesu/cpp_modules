/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 09:59:24 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/30 17:08:23 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
# define __FORM_HPP__

# include "Bureaucrat.hpp"

class	Form
{
	private :
		std::string const	__name;
		bool				__isSigned;
		int const			__signGrade;
		int const			__execGrade;

	public :
		Form();
		Form( const std::string &name, int sign, int exec );
		Form( const Form &src );
		Form	&operator=( const Form &rhs );
		~Form();

		class	GradeTooHighException : public std::exception {
			public :
				std::string	__error;
				GradeTooHighException() : __error( "Grade too high" ) {}
				GradeTooHighException( std::string const &error ) : __error( error ) {}
				const char	*what() const throw() { return ; }
		};
		class	GradeTooLowException : public std::exception {
			public :
				std::string	__error;
				GradeTooLowException() : __error( "Grade too high" ) {}
				GradeTooLowException( std::string const &error ) : __error( error ) {}
				const char	*what() const throw() { return "Grade too low"; }
		};
		
		std::string	getName( void ) const ;
		bool		getStat( void ) const ;
		int			getExecGrade( void ) const ;
		int			getSignGrade( void ) const ;
		void		beSigned( const Bureaucrat &bureaucrat );
};

std::ostream	&operator<<( std::ostream &o, const Form &form );

#endif
