/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 09:59:07 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/30 17:18:01 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : __name( "Default" ), __isSigned( false ), __signGrade( 150 ), __execGrade( 150 ) {

}

Form::Form( const std::string &name, int sign, int exec ) : __name( name ), __isSigned( false ), __signGrade( sign ), __execGrade( exec ) {
	sign > 150 ? throw GradeTooLowException() : false;
	sign < 1 ? throw GradeTooHighException() : false;
}

Form::Form( const Form &src ) : __name(src.__name), __signGrade( src.__signGrade ), __execGrade( src.__execGrade ) {
	*this = src;
}

Form	&Form::operator=(const Form &rhs ) {
	if (this != &rhs)
		this->__isSigned = rhs.getStat();
	return *this;
}

Form::~Form() {

}

std::string	Form::getName( void ) const {
	return this->__name;
}

bool	Form::getStat( void ) const {
	return this->__isSigned;
}

int		Form::getExecGrade( void ) const {
	return this->__execGrade;
}

int		Form::getSignGrade( void ) const {
	return this->__signGrade;
}

void		Form::beSigned( const Bureaucrat &bureaucrat ) {
	bureaucrat.getGrade() <= this->getStat() ? this->__isSigned = true : throw GradeTooLowException();
}

std::ostream	&operator<<( std::ostream &o, const Form &form ){
	std::string	mess(" : signed, requires ");
	if (form.getStat() == false)
		mess.insert(3, "not ");
	std::cout << form.getName() << mess << form.getSignGrade() << " to be signed and " << form.getExecGrade() << " to be executed";
	return o;
}
