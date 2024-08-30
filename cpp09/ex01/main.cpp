#include "RPN.hpp"

int	main( int ac, char **av ) {
	if (ac == 2) {

		RPN::calculate( *(av + 1) );

	} else
		std::cerr << RED << "Usage: ./RPN [expression]" << NON << std::endl;

	return 0;
}
