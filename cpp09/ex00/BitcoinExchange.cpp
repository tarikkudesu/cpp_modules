#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	throw btcException( "No input database" );
}

BitcoinExchange::BitcoinExchange( std::string const &input ) : __inputDb( input ) {
	if (__inputDb.find(".csv") == std::string::npos)
		throw btcException( INV_ARG );
	else if (std::string(__inputDb.end() - 4, __inputDb.end()) != ".csv")
		throw btcException( INV_ARG );

	this->__dbStream.open( "data.csv" );
	if (this->__dbStream.is_open() == false)
		throw btcException( "Error : database <data.csv> wasn't found" );

	this->__inputStream.open( this->__inputDb );
	if (this->__inputStream.is_open() == false) {
		this->__dbStream.close();
		throw btcException( "Error : couldn't open input file" );
	}
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange &copy ) : __Db( copy.__Db ) {

}

BitcoinExchange::~BitcoinExchange() {
	this->__inputStream.close();
	this->__dbStream.close();
}

BitcoinExchange	&BitcoinExchange::operator=( const BitcoinExchange &assign ) {
	if (this != &assign)
		this->__Db = assign.__Db;
	return *this;
}

bool	BitcoinExchange::validValue( std::string const &value ) {
	size_t	i = 0;

	i = ( value.at( 0 ) == '+' || value.at( 0 ) == '-' );
	for ( ; i < value.length(); i++)
		if (!std::isdigit( value.at( i ) ) && value.at( i ) != '.') { return false; }

	return true;
}

bool	BitcoinExchange::validDate( std::string const &date ) {

	if (date.length() != 10 || (date.at(4) != '-' && date.at(7) != '-'))
		return false;

	for (int i = 0; i < 10; i++)
		if (!std::isdigit(date.at(i)) && date.at(i) != '-') { return false; }

	int	year, month, day;
	std::stringstream( date.substr(0, 4) ) >> year;
	std::stringstream( date.substr(5, 2) ) >> month;
	std::stringstream( date.substr(8, 2) ) >> day;

	if (month < 1 || month > 12)
		return false;
	if (day < 1 || day > 31)
		return false;
	if (month == 2) {
		bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
		if (day > 29 || (day == 29 && !isLeapYear))
			return false;
	}
	if (month == 4 || month == 6 || month == 9 || month == 11)
		if (day > 30) return false;

	return true;
}

float	BitcoinExchange::processInput( std::string const input ) {
	if (input.length() < 14)
		throw btcException( std::string("Error: bad input => " + input ).c_str() );

	std::string	date( input.begin(), input.begin() + 10 );
	std::string	sep( input.begin() + 10, input.begin() + 13 );
	std::string	value( input.begin() + 13, input.end() );

	if (!validDate( date ))
		throw btcException( std::string( "Error: bad input => " + date ).c_str() );
	if (sep != " | ")
		throw btcException( std::string( "Error: bad input => " + sep ).c_str() );
	if (!validValue( value ))
		throw btcException( std::string( "Error: bad input => " + value ).c_str() );

	std::map< std::string, float >::iterator	it = this->__Db.begin();
	if (date < it->first)
		throw btcException( std::string( "Error: bad input => " + date ).c_str() );

	if (value.at(0) == '-')
		throw btcException( "Error: not a positive number." );

	std::stringstream	ss( value );
	float result;
	ss >> result;
	if (ss.fail() || result > 1000)
		throw btcException( "Error: too large a number." );

	return result;
}

void	BitcoinExchange::processInputDb( void ) {
	std::string	line;

	std::getline(this->__inputStream, line, '\n');
	if (this->__inputStream.eof() || this->__inputStream.fail())
		throw btcException( "Error : empty file" );
	if (line != "date | value")
		throw btcException( "Error : invalid input format" );
	line.clear();

	while (true) {
		std::getline(this->__inputStream, line, '\n');

		if (this->__dbStream.eof() && line.length() == 0 )
			break ;

		try {

			float		value = this->processInput( line );
			std::string	date = std::string( line.begin(), line.begin() + 10 );

			std::cout << date << " => " << value << " = ";
			if (this->__Db.find( date ) != this->__Db.end())
				std::cout << value * this->__Db[date] << std::endl;
			else
				std::cout << value * this->__Db.lower_bound( date )->second << std::endl;

		} catch ( std::exception &e ) {
			std::cout << RED << e.what() << NON << std::endl;
		}

		line.clear();
	}
}

void	BitcoinExchange::extractDb( void ) {
	std::string	line;

	std::getline( this->__dbStream, line, '\n' );
	if (this->__dbStream.eof() || this->__dbStream.fail())
		throw btcException( INV_DB );
	if (line != "date,exchange_rate")
		throw btcException( INV_DB );
	line.clear();

	while (true) {
		std::getline(this->__dbStream, line, '\n');

		if (this->__dbStream.eof() && line.length() == 0 )
			break ;

		if (line.length() < 12)
			throw btcException( INV_DB );
		std::string		date( line.begin(), line.begin() + 10 );
		std::string		exchange_rate( line.begin() + 11, line.end() );
		if (validDate(date) == false)
			throw btcException( INV_DB );
		if (validValue(exchange_rate) == false)
			throw btcException( INV_DB );
		this->__Db[date] = std::strtof( exchange_rate.c_str(), NULL );

		line.clear();
	}
}

void	BitcoinExchange::processData( void ) {
	this->extractDb();
	this->processInputDb();
}

BitcoinExchange::btcException::btcException( const char *error ) : __error( error ) { }
const char	*BitcoinExchange::btcException::what( void ) const throw() { return __error; }
