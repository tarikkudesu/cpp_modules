/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 20:32:08 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/30 17:17:06 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : __grade(150) {
	
}

Bureaucrat::Bureaucrat( const std::string &name ) : __name( name ), __grade(150) {
	
}

Bureaucrat::Bureaucrat( const Bureaucrat &src ) {
	*this = src;
}

Bureaucrat	&Bureaucrat::operator=( const Bureaucrat &rhs ) {
	if (this != &rhs) {
		this->__name = rhs.__name;
		this->__grade = rhs.__grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {
	
}

int			Bureaucrat::getGrade( void ) const {
	return this->__grade;
}

std::string	Bureaucrat::getName( void ) const {
	return this->__name;
}

void	Bureaucrat::gradeUp( void ) {
	if (this->__grade - 1 == 0)
		throw GradeTooHighException();
	this->__grade--;
	// std::cout << this->getName() << " : has been graded up, new Grade : " << this->getGrade() << std::endl;
}

void	Bureaucrat::gradeDown( void ) {
	if (this->__grade + 1 == 151)
		throw GradeTooLowException();
	this->__grade++;
	// std::cout << this->getName() << " : has been graded down, new Grade : " << this->getGrade() << std::endl;
}

void		Bureaucrat::signForm( Form &form ) {
	try {
		form.beSigned( *this );
	} catch (Form::GradeTooLowException) {
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because Grade is too low" << std::endl;
	}
}

std::ostream	&operator<<( std::ostream &o, const Bureaucrat &bureaucrat ) {
	std::cout << bureaucrat.getName() << " : Bureaucrat of grade " << bureaucrat.getGrade();
	return o;
}
