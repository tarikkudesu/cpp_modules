/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:45:21 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/06 12:13:15 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <fstream>

class	AForm;

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

		int				getGrade( void ) const;
		std::string		getName( void ) const;
		void			gradeUp( void );
		void			gradeDown( void );
		void			signForm( AForm &form );
		void			executeForm( AForm const &form );

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