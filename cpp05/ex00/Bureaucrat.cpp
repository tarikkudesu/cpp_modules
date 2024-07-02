/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 20:32:08 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/30 09:46:56 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : __name("Default"), __grade(150) {
	
}

Bureaucrat::Bureaucrat( const std::string &name, int grade ) : __name( name ), __grade( grade ) {
	grade > 150 ? throw GradeTooLowException() : false;
	grade < 1 ? throw GradeTooHighException() : false;
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

int			Bureaucrat::getGrade() const {
	return this->__grade;
}

std::string	Bureaucrat::getName() const {
	return this->__name;
}

void	Bureaucrat::gradeUp() {
	if (this->__grade - 1 == 0)
		throw GradeTooHighException();
	this->__grade--;
}

void	Bureaucrat::gradeDown() {
	if (this->__grade + 1 == 151)
		throw GradeTooLowException();
	this->__grade++;
}

std::ostream	&operator<<( std::ostream &o, const Bureaucrat &src ) {
	std::cout << src.getName() << " : Bureaucrat of grade " << src.getGrade();
	return o;
}
