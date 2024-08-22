/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:45:08 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/17 19:23:22 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : __name( "default" ), __isSigned( false ), __signGrade( 150 ), __execGrade( 150 ) {
	std::cout << "Default AForm Constructor called" << std::endl;
}

AForm::AForm( std::string const &name, int signGrade, int execGrade ) : __name( name ), __isSigned( false ), __signGrade( signGrade ), __execGrade( execGrade ) {
	std::cout << "AForm Constructor called : ";
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

AForm::AForm( const AForm &copy ) : __name( copy.getName() ), __isSigned( copy.getStat() ), __signGrade( copy.getSignGrade() ), __execGrade( copy.getExecGrade() ) { }

AForm::~AForm() { }

AForm	&AForm::operator=( const AForm &assign ) {
	if (this != &assign)
		this->__isSigned = assign.__isSigned;
	return *this;
}

std::string const	AForm::getName( void ) const { return __name; }
bool				AForm::getStat( void ) const { return __isSigned; }
int					AForm::getSignGrade( void ) const { return __signGrade; }
int					AForm::getExecGrade( void ) const { return	__execGrade; }

void	AForm::beSigned( Bureaucrat &bureaucrat ) {
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	if (this->getStat())
		throw GradeTooHighException( "\033[0;31mForm already signed\033[0m" );
	this->__isSigned = true;
}

void	AForm::execute( Bureaucrat const &bureaucrat ) const {
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	if (this->getStat() == false)
		throw GradeTooHighException( "\033[0;31mForm is not signed\033[0m" );
	this->formAction();
}

std::ostream	&operator<<( std::ostream &o, AForm &rhs ) {
	o << rhs.getName() << ", sign grade : " << rhs.getSignGrade() << ", execution grade : " << rhs.getExecGrade();
	if (rhs.getStat())
		o << ", signed";
	else
		o << ", unsigned";
	return o;
}

AForm::GradeTooHighException::GradeTooHighException() : __error( "\033[0;31mgrade is too high!!\033[0m" ) { }
AForm::GradeTooHighException::GradeTooHighException( const char *error ) : __error( error ) { }
const char	*AForm::GradeTooHighException::what( void ) const throw() { return __error; }

AForm::GradeTooLowException::GradeTooLowException() : __error( "\033[0;31mgrade is too low!!\033[0m" ) { }
AForm::GradeTooLowException::GradeTooLowException( const char *error ) : __error( error ) { }
const char	*AForm::GradeTooLowException::what( void ) const throw() { return __error; }
