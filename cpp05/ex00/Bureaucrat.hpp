/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:44:08 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/06 12:12:59 by tamehri          ###   ########.fr       */
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

	public:
		Bureaucrat();
		Bureaucrat( std::string const &name, int grade );
		Bureaucrat( const Bureaucrat &copy );
		Bureaucrat & operator=( const Bureaucrat &assign );
		~Bureaucrat();

		int			getGrade( void ) const;
		std::string	getName( void ) const;
		void		gradeUp( void );
		void		gradeDown( void );

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