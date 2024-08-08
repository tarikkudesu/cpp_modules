/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:46:32 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/06 18:40:16 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main( void ) {
	Intern	someRandomIntern;

	try {
		AForm	*ppf;
		ppf = someRandomIntern.makeForm( "presidential pardon", "trump" );
		delete ppf;

		AForm	*rrf;
		rrf = someRandomIntern.makeForm( "sheese burger creation form", "trump" );
	} catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
}
