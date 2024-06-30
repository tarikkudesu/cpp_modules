/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 20:31:19 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/30 09:53:42 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

#include <iostream>

class	Bureaucrat
{
	private :
		std::string	__name;
		int			__grade;

	public :
		class		GradeTooHighException {};
		class		GradeTooLowException {};

		Bureaucrat();
		Bureaucrat( const std::string &name );
		Bureaucrat( const Bureaucrat &src );
		Bureaucrat	&operator=( const Bureaucrat &rhs );
		~Bureaucrat();

		std::string	getName() const ;
		int			getGrade() const ;
		void		gradeUp();
		void		gradeDown();
};

std::ostream	&operator<<( std::ostream &o, const Bureaucrat &src );

#endif
