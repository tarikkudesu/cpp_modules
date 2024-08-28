#include "BitcoinExchange.hpp"

int	main( int ac, char **av ) {
	if (ac == 2) {

		try {
			BitcoinExchange	btc( std::string( *(av + 1) ) );

			btc.processData();
		} catch ( std::exception &e ) {
			std::cerr << RED << e.what() << NON << std::endl;
		}

	} else
		std::cerr << INV_ARG << std::endl;
}
