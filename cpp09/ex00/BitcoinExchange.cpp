#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	std::cout << "BitcoinExchange Default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange &copy ) {
	std::cout << "BitcoinExchange copy constructor called" << std::endl;
	(void) copy;
}

BitcoinExchange::~BitcoinExchange() {
	std::cout << "BitcoinExchange Desctructor called" << std::endl;
}

BitcoinExchange	&BitcoinExchange::operator=( const BitcoinExchange &assign ) {
	std::cout << "BitcoinExchange Copy assignment operator called" << std::endl;
	(void) assign;
	return *this;
}
