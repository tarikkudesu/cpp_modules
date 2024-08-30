#include "PmergeMe.hpp"

int	main( int ac, char **av ) {
	if (ac == 1)
		std::cerr << RED << "Error: no arguments supplied" << NON << std::endl;
	else
		PmergeMe::merge_insert_sort( av + 1 );
}
