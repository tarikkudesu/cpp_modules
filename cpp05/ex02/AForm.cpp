/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 09:59:07 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/02 20:04:37 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : __name( "Default" ), __isSigned( false ), __signGrade( 150 ), __execGrade( 150 ) {

}

AForm::AForm( const std::string &name, int sign, int exec ) : __name( name ), __isSigned( false ), __signGrade( sign ), __execGrade( exec ) {
	sign > 150 ? throw GradeTooLowException() : false;
	sign < 1 ? throw GradeTooHighException() : false;
}

AForm::AForm( const AForm &src ) : __name(src.__name), __signGrade( src.__signGrade ), __execGrade( src.__execGrade ) {
	*this = src;
}

AForm	&AForm::operator=(const AForm &rhs ) {
	if (this != &rhs)
		this->__isSigned = rhs.getStat();
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
	bureaucrat.getGrade() <= this->getStat() ? this->__isSigned = true : throw GradeTooLowException();
}

std::ostream	&operator<<( std::ostream &o, const AForm &form ){
	std::string	mess(" : signed, requires ");

	if (form.getStat() == false)
		mess.insert(3, "not ");
	std::cout << form.getName() << mess << form.getSignGrade() << " to be signed and " << form.getExecGrade() << " to be executed";
	return o;
}
