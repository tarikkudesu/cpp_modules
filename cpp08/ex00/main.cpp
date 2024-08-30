#include "easyfind.hpp"

int	main( void ) {
	int	arr[] = {4, 23, 3, 4, 5, 23, 76, 8, 8, 5};

	// Testing Empty Container
	try {
		std::list<int>	intList;
		::easyfind(intList, 4);
	} catch( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}

	// Finding an element in a list
	try {

		std::list<int>	intList(arr, arr + sizeof(arr) / sizeof(*arr));
		int found = ::easyfind(intList, 4);
		std::cout << "Element was found" << std::endl;;
		found = ::easyfind(intList, 0);

	} catch( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}

	// Finding an element in a vector
	try {

		std::vector<int>	intVect(arr, arr + sizeof(arr) / sizeof(*arr));
		int found = ::easyfind(intVect, 4);
		std::cout << "Element was found" << std::endl;;
		found = ::easyfind(intVect, 0);

	} catch( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}

	// Finding an element in a deque
	try {

		std::deque<int>	intDeque(arr, arr + sizeof(arr) / sizeof(*arr));
		int found = ::easyfind(intDeque, 4);
		std::cout << "Element was found" << std::endl;;
		found = ::easyfind(intDeque, 0);

	} catch( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
}
