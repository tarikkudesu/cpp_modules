#include "PmergeMe.hpp"

int	main( int ac, char **av ) {
	if (ac == 1) {
		std::cerr << RED << "error: " << BOL << "no arguments supplied" << NON << std::endl;
		return EXIT_FAILURE;
	} else {
		try {

			PmergeMe::mergeInsertionSort( av + 1 );

		} catch ( std::exception &e ) {
			std::cout << RED << "error: " << BOL << e.what() << NON << std::endl;
		}
	}
}
