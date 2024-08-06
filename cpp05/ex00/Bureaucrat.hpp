/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:44:08 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/06 11:44:09 by tamehri          ###   ########.fr       */
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
				GradeTooHighException() : __error( "\033[0;31mgrade is too high!!\033[0m" ) { }
				GradeTooHighException( const char *error ) : __error( error ) { }
				virtual const char	*what( void ) const throw() { return __error; }
		};

		class GradeTooLowException : public std::exception {
			public :
				const char	*__error;
				GradeTooLowException() : __error( "\033[0;31mgrade is too low!!\033[0m" ) { }
				GradeTooLowException( const char *error ) : __error( error ) { }
				virtual const char	*what( void ) const throw() { return __error; }
		};
};

std::ostream	&operator<<( std::ostream &o, Bureaucrat &rhs );

#endif