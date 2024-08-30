/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:51:18 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/27 11:06:11 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750

int	main( void ) {
	IArray					*iArr = new IArray(3);
	DArray					dArr(5);
	Array< float >			eArr(0); // ********* test an empty Array *********
	Array< std::string >	sArr(2);

	try {

		// ********************** test with simple arrays **********************
		for (unsigned int i = 0; i < iArr->size(); i++)
			(*iArr)[i] = i * 4;
	
		for (unsigned int i = 0; i < dArr.size(); i++)
			dArr[i] = i * 2 + 0.5;
	
		std::cout << "size: " << iArr->size() << std::endl << "Elements: ";
		for (unsigned int i = 0; i < iArr->size(); i++) {
			std::cout << (*iArr)[i] << " ";
		} std::cout << std::endl;
	
		std::cout << "size: " << dArr.size() << std::endl << "Elements: ";
		for (unsigned int i = 0; i < dArr.size(); i++) {
			std::cout << dArr[i] << " ";
		} std::cout << std::endl;

		// ********************** test with complex arrays **********************
		sArr[0] = "\033[1;32mこれが";
		sArr[1] = "すばらしい\033[0m";
		std::cout << sArr[0] << " " << sArr[1] << std::endl;

	} catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}

	delete iArr;

	// **************************************************************************

    IArray		numbers( MAX_VAL );
    int			*mirror = new int[ MAX_VAL ];

    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++) {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
	
    { // ********* test copy constructor and copy assignement operator *********
        IArray tmp = numbers;
        IArray test( tmp );
    }

    for (int i = 0; i < MAX_VAL; i++) {
        if (mirror[i] != numbers[i]) {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    try {
        numbers[-2] = 0;
    } catch( const std::exception &e ) {
        std::cerr << e.what() << '\n';
    }

    try {
        numbers[MAX_VAL] = 0;
    } catch( const std::exception &e ) {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++) 
        numbers[i] = rand();

    delete[] mirror;

    return 0;
}
