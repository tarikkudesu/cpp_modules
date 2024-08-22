/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:44:33 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/17 19:22:58 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : __name( "default" ), __isSigned( false ), __signGrade( 150 ), __execGrade( 150 ) {
	std::cout << "Default Form Constructor called" << std::endl;
}

Form::Form( std::string const &name, int signGrade, int execGrade ) : __name( name ), __isSigned( false ), __signGrade( signGrade ), __execGrade( execGrade ) {
	std::cout << "Form Constructor called : ";
	if (signGrade < 1)
		throw GradeTooHighException( "\033[0;31msign grade is too high!!\033[0m" );
	if (execGrade < 1)
		throw GradeTooHighException( "\033[0;31mexcecution grade is too high!!\033[0m" );
	if (signGrade > 150)
		throw GradeTooHighException( "\033[0;31msign grade is too low!!\033[0m" );
	if (execGrade > 150)
		throw GradeTooHighException( "\033[0;31mexcecution grade is too low!!\033[0m" );
	std::cout << "\033[0;32mSuccessfull\033[0m" << std::endl;
}

Form::Form( const Form &copy ) : __name( copy.getName() ), __isSigned( copy.getStat() ), __signGrade( copy.getSignGrade() ), __execGrade( copy.getExecGrade() ) { }

Form::~Form() { }

Form	&Form::operator=( const Form &assign ) {
	if (this != &assign)
		this->__isSigned = assign.__isSigned;
	return *this;
}

std::string const	Form::getName( void ) const { return __name; }
bool				Form::getStat( void ) const { return __isSigned; }
int					Form::getSignGrade( void ) const { return __signGrade; }
int					Form::getExecGrade( void ) const { return	__execGrade; }

void	Form::beSigned( Bureaucrat &bureacrat ) {
	if (bureacrat.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	if (this->getStat())
		throw GradeTooHighException( "\033[0;31mForm already signed\033[0m" );
	this->__isSigned = true;
}

std::ostream	&operator<<( std::ostream &o, Form &rhs ) {
	o << rhs.getName() << ", sign grade : " << rhs.getSignGrade() << ", execution grade : " << rhs.getExecGrade();
	if (rhs.getStat())
		o << ", signed";
	else
		o << ", unsigned";
	return o;
}

Form::GradeTooHighException::GradeTooHighException() : __error( "\033[0;31mgrade is too high!!\033[0m" ) { }
Form::GradeTooHighException::GradeTooHighException( const char *error ) : __error( error ) { }
const char	*Form::GradeTooHighException::what( void ) const throw() { return __error; }

Form::GradeTooLowException::GradeTooLowException() : __error( "\033[0;31mgrade is too low!!\033[0m" ) { }
Form::GradeTooLowException::GradeTooLowException( const char *error ) : __error( error ) { }
const char	*Form::GradeTooLowException::what( void ) const throw() { return __error; }
