/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:44:08 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/17 19:18:19 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private :
		const std::string	__name;
		int					__grade;

	public :
		Bureaucrat();
		Bureaucrat( std::string const &name, int grade );
		Bureaucrat( const Bureaucrat &copy );
		Bureaucrat	&operator=( const Bureaucrat &assign );
		~Bureaucrat();

		std::string	getName( void ) const;
		int			getGrade( void ) const;
		void		gradeDown( void );
		void		gradeUp( void );

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

std::ostream	&operator<<( std::ostream &o, Bureaucrat &rhs );

#endif