/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:59:09 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/27 12:11:01 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main( void ) {
	/* ************************** Empty Container ************************** */
	try {
		std::list<int>	intList;
		::easyfind(intList, 2);
	} catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}

	int	intArr[] = {4, 23, 3, 4, 5, 23, 76, 8, 8, 5};

	/* *********************** a non existing element *********************** */
	try {
		std::list<int>	intList(intArr, intArr + sizeof(intArr) / sizeof(*intArr));
		int	found = ::easyfind(intList, -1);
		std::cout << "element " << found << " was found" << std::endl;
	} catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}

	/* *************** finding elements int a list comtainer *************** */
	try {
		std::list<int>	intList(intArr, intArr + sizeof(intArr) / sizeof(*intArr));
		int	found = ::easyfind(intList, 4);
		std::cout << "element " << found << " was found" << std::endl;
	} catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}

	/* ************** finding elements int a vector comtainer ************** */
	try {
		std::vector<int>	intVector(intArr, intArr + sizeof(intArr) / sizeof(*intArr));
		int	found = ::easyfind(intVector, 8);
		std::cout << "element " << found << " was found" << std::endl;
	} catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}

	/* *************** finding elements int a deque comtainer *************** */
	try {
		std::deque<int>	intDeque(intArr, intArr + sizeof(intArr) / sizeof(*intArr));
		int	found = ::easyfind(intDeque, 5);
		std::cout << "element " << found << " was found" << std::endl;
	} catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
}
