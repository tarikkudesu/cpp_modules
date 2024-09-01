#include "BitcoinExchange.hpp"

int	main( int ac, char **av ) {
	if (ac == 2) {
		try {

			BitcoinExchange::processData( std::string( *(av + 1) ) );

		} catch ( std::exception &e ) {
			std::cerr << RED << "error: " << NON << e.what() << std::endl;
		}
	} else
		std::cerr << INV_ARG << std::endl;
}
