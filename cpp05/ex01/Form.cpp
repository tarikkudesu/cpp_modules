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

Form::Form() : __isSigned( false ), __execGrade( 150 ), __signGrade( 150 ) {

}

Form::Form( const std::string &name ) : __name( name ), __isSigned( false ), __execGrade( 100 ), __signGrade( 100 ) {

}

Form::Form( const Form &src ) : __name(src.__name), __execGrade( src.__execGrade ), __signGrade( src.__signGrade ) {
	*this = src;
}

Form	&Form::operator=(const Form &rhs ) {
	if (this != &rhs)
		this->__isSigned = rhs.__isSigned;
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
	if (bureaucrat.getGrade() <= this->getSignGrade()) {
		std::cout << bureaucrat.getName() << " signed " << this->getName() << std::endl;
		this->__isSigned = true;
	} else
		throw Form::GradeTooLowException();
}

std::ostream	&operator<<( std::ostream &o, const Form &form ){
	std::string	mess(" : signed, requires ");
	if (form.getStat() == false)
		mess.insert(3, "not ");
	std::cout << form.getName() << mess << form.getSignGrade() << " to be signed and " << form.getExecGrade() << " to be executed";
	return o;
}
