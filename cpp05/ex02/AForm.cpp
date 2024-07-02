/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 09:59:07 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/01 19:34:01 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : __isSigned( false ), __execGrade( 150 ), __signGrade( 150 ) {

}

AForm::AForm( const std::string &name ) : __name( name ), __isSigned( false ), __execGrade( 100 ), __signGrade( 100 ) {

}

AForm::AForm( const std::string &name, int exec, int sign ) : __name( name ), __isSigned( false ), __execGrade( exec ), __signGrade( sign ) {
	
}

AForm::AForm( const AForm &src ) : __name(src.__name), __execGrade( src.__execGrade ), __signGrade( src.__signGrade ) {
	*this = src;
}

AForm	&AForm::operator=(const AForm &rhs ) {
	if (this != &rhs)
		this->__isSigned = rhs.__isSigned;
	return *this;
}

AForm::~AForm() {

}

std::string	AForm::getName( void ) const {
	return this->__name;
}

bool	AForm::getStat( void ) const {
	return this->__isSigned;
}

int		AForm::getExecGrade( void ) const {
	return this->__execGrade;
}

int		AForm::getSignGrade( void ) const {
	return this->__signGrade;
}

void		AForm::beSigned( const Bureaucrat &bureaucrat ) {
	if (bureaucrat.getGrade() <= this->getSignGrade()) {
		std::cout << bureaucrat.getName() << " signed " << this->getName() << std::endl;
		this->__isSigned = true;
	} else
		throw AForm::GradeTooLowException();
}

std::ostream	&operator<<( std::ostream &o, const AForm &form ){
	std::string	mess(" : signed, requires ");
	if (form.getStat() == false)
		mess.insert(3, "not ");
	std::cout << form.getName() << mess << form.getSignGrade() << " to be signed and " << form.getExecGrade() << " to be executed";
	return o;
}
