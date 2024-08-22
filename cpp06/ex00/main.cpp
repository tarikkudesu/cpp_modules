/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:20:15 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/22 19:03:33 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main( int ac, char **av ) {
	if (ac == 2)
		ScalarConverter::convert( *(av + 1) );
	else
		std::cerr << "Usage: ./convert number" << std::endl;
}
