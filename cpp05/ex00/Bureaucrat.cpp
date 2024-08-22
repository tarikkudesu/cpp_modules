/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:44:05 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/17 19:23:48 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : __name( "Default" ), __grade( 150 ) {
	std::cout << "Default Constructor called, Default grade : 150" << std::endl;
}

Bureaucrat::Bureaucrat( std::string const &name, int grade ) : __name( name ) {
	std::cout << name << " : Constructor called : ";
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->__grade = grade;
	std::cout << "\033[0;32mSuccessfull\033[0m" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat &copy ) : __name( copy.__name ), __grade( copy.__grade ) {
	std::cout << "Copy Constructor called of Bureaucrat" << std::endl;
}

Bureaucrat::~Bureaucrat() { }

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign) {
	std::cout << "Copy Assignement Constructor called of Bureaucrat" << std::endl;
	if (this != &assign)
		this->__grade = assign.__grade;
	return *this;
}

int			Bureaucrat::getGrade( void ) const { return __grade; }
std::string	Bureaucrat::getName( void ) const { return __name; }

void		Bureaucrat::gradeUp( void ) {
	std::cout <<  this->__name << " : Grading Bureaucrat up : ";
	if (this->__grade == 1)
		throw GradeTooHighException();
	this->__grade--;
	std::cout << "\033[0;32mSuccessfull\033[0m" << std::endl;
}

void		Bureaucrat::gradeDown( void ) {
	std::cout <<  this->getName() << " : Grading Bureaucrat Down : ";
	if (this->__grade == 150)
		throw GradeTooLowException();
	this->__grade++;
	std::cout << "\033[0;32mSuccessfull\033[0m" << std::endl;
}

std::ostream	&operator<<( std::ostream &o, Bureaucrat &rhs ) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() : __error( "\033[0;31mgrade is too high!!\033[0m" ) { }
Bureaucrat::GradeTooHighException::GradeTooHighException( const char *error ) : __error( error ) { }
const char	*Bureaucrat::GradeTooHighException::what( void ) const throw() { return __error; }

Bureaucrat::GradeTooLowException::GradeTooLowException() : __error( "\033[0;31mgrade is too low!!\033[0m" ) { }
Bureaucrat::GradeTooLowException::GradeTooLowException( const char *error ) : __error( error ) { }
const char	*Bureaucrat::GradeTooLowException::what( void ) const throw() { return __error; }
