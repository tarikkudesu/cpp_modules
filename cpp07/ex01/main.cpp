/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:51:16 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/26 09:56:03 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main( void ) {

	double	dArr[] = { 1.2, 2.5, 4.1, 5.3, 6.8, 7.5, 8.5, 9.0 };
	int		iArr[] = { 1, 2, 4, 5, 6, 7, 8, 9 };

	size_t	iSize = sizeof( iArr ) / sizeof( iArr[0] );
	size_t	dSize = sizeof( iArr ) / sizeof( iArr[0] );

	::iter(iArr, iSize, printEl< int >);
	std::cout << std::endl;

	::iter(iArr, iSize, incr< int >);

	::iter(iArr, iSize, printEl< int >);
	std::cout << std::endl;

	::iter(dArr, dSize, printEl< double >);
	std::cout << std::endl;

	::iter(dArr, dSize, incr< double >);

	::iter(dArr, dSize, printEl< double >);
	std::cout << std::endl;

	return 0;
}
