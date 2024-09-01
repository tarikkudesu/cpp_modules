#include "RPN.hpp"

int	main( int ac, char **av ) {
	if (ac == 2) {
		RPN::calculate( *(av + 1) );
	} else
		std::cerr << "Usage: ./RPN [expression]" << std::endl;
	return 0;
}
