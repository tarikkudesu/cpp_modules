/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:51:08 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/26 09:41:03 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "anything.hpp"
#include "whatever.hpp"

int	main( void ) {

	{
		int a = 2;
		int b = 3;

		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

		std::string c = "chaine1";
		std::string d = "chaine2";

		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}

	std::cout << std::endl;

	{
		Whatever a( "whatsoever" ), b( "whatnotsoever" );

		::swap(a, b);
		std::cout << a << " " << b << std::endl;
		std::cout << ::max(a, b) << std::endl;
		std::cout << ::min(a, b) << std::endl;
	}

	return 0;
}
