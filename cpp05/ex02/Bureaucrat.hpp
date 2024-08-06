/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:45:21 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/06 11:45:22 by tamehri          ###   ########.fr       */
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

std::ostream	&operator<<( std::ostream &o, Bureaucrat &rhs );

#endif