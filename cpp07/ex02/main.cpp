#include "Array.hpp"

int	main( void ) {
	try {
		Array<int>	*iArr = new Array<int>(3);
		Array<double>	dArr(5);

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
	
	} catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
}
