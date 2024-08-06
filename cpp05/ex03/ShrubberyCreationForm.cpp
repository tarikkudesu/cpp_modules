/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:46:57 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/06 11:46:58 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm( "ShrubberyCreationForm", 25, 5 ) {
	std::cout << "Form type : ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string const target ) : AForm( "ShrubberyCreationForm", 25, 5 ), __target( target ) {
	std::cout << "Form type : ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &copy ) : AForm( copy ) {

}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( const ShrubberyCreationForm &assign ) {
	if (this != &assign) {
		AForm::operator=( assign );
		this->__target = assign.__target;
	}
	return *this;
}

void	ShrubberyCreationForm::formAction( void ) const {
	std::ofstream	file;

	file.open( this->__target + "_shrubbery" );
	if (file.is_open()) {
		file << "                     ; ; ;" << std::endl;
        file << "           ;        ;  ;     ;;    ;" << std::endl;
        file << "        ;                 ;         ;  ;" << std::endl;
        file << "                        ;" << std::endl;
        file << "                       ;                ;;" << std::endl;
        file << "     ;            ;            ;              ;" << std::endl;
        file << "     ;              ';,        ;               ;" << std::endl;
        file << "       ;              'b      *" << std::endl;
        file << "        ;              '$    ;;                ;;" << std::endl;
        file << "       ;    ;           $:   ;:               ;" << std::endl;
        file << "     ;;      ;  ;;      *;  @):        ;   ; ;" << std::endl;
        file << "                  ;     :@,@):   ,;**:'   ;" << std::endl;
        file << "      ;      ;,         :@@*: ;;**'      ;   ;" << std::endl;
        file << "               ';o;    ;:(@';@*\"'  ;" << std::endl;
        file << "       ;  ;       'bq,;;:,@@*'   ,*      ;  ;" << std::endl;
        file << "                  ,p$q8,:@)'  ;p*'      ;" << std::endl;
        file << "           ;     '  ; '@@Pp@@*'    ;  ;" << std::endl;
        file << "            ;  ; ;;    Y7'.'     ;  ;" << std::endl;
        file << "                      :@):." << std::endl;
        file << "                     .:@:'." << std::endl;
        file << "                   .::(@:.####" << std::endl;
        file << "                 ..@@@@@#3#####$@.." << std::endl;
		std::cout << "a tree has been witten to " << this->__target << "_shrubbery" << std::endl;
	} else
		throw GradeTooHighException( "\033[0;31merror opening file\033[0m" );
}
