#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	throw std::runtime_error( "No input database" );
}

BitcoinExchange::BitcoinExchange( std::string const &input ) : __inputDb( input ) {
	if (__inputDb.find(".csv") == std::string::npos)
		throw std::runtime_error( INV_ARG );
	else if (std::string(__inputDb.end() - 4, __inputDb.end()) != ".csv")
		throw std::runtime_error( INV_ARG );

	this->__dbStream.open( "database/data.csv" );
	if (this->__dbStream.is_open() == false)
		throw std::runtime_error( "database <data.csv> wasn't found" );

	this->__inputStream.open( this->__inputDb );
	if (this->__inputStream.is_open() == false) {
		this->__dbStream.close();
		throw std::runtime_error( "couldn't open input file" );
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
	std::istringstream( date.substr(0, 4) ) >> year;
	std::istringstream( date.substr(5, 2) ) >> month;
	std::istringstream( date.substr(8, 2) ) >> day;

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
	if (input.length() == 0)
		throw std::runtime_error( std::string( "empty line" ).c_str() );
	else if (input.length() < 14)
		throw std::runtime_error( std::string( "bad input => \e[33m" + input).c_str() );

	std::string	date( input.begin(), input.begin() + 10 );
	std::string	sep( input.begin() + 10, input.begin() + 13 );
	std::string	value( input.begin() + 13, input.end() );

	if (!validDate( date ))
		throw std::runtime_error( std::string( "bad input => \e[33m" + date ).c_str() );
	if (sep != " | ")
		throw std::runtime_error( std::string( "bad input => \e[33m" + sep ).c_str() );
	if (!validValue( value ))
		throw std::runtime_error( std::string( "bad input => \e[33m" + value ).c_str() );

	std::map< std::string, float >::iterator	it = this->__Db.begin();
	if (date < it->first)
		throw std::runtime_error( std::string( "bad input => \e[33m" + date ).c_str() );

	if (value.at(0) == '-')
		throw std::runtime_error( "not a positive number." );

	std::istringstream	ss( value );
	float result;
	ss >> result;
	if (ss.fail() || result > 1000)
		throw std::runtime_error( "too large number." );

	return result;
}

void	BitcoinExchange::processInputDb( void ) {
	std::string	line;

	std::getline(this->__inputStream, line, '\n');
	if (this->__inputStream.eof() || this->__inputStream.fail())
		throw std::runtime_error( "empty file" );
	if (line != "date | value")
		throw std::runtime_error( "invalid input format <date | value>" );
	line.clear();

	int i = 2;
	while (std::getline(this->__inputStream, line, '\n')) {
		try {
			float		value = this->processInput( line );
			std::string	date = std::string( line.begin(), line.begin() + 10 );
			std::cout << date << " => " << value << " = ";
			if (this->__Db.find( date ) != this->__Db.end())
				std::cout << value * this->__Db[date] << std::endl;
			else
				std::cout << value * this->__Db.lower_bound( date )->second << std::endl;
		} catch ( std::exception &e ) {
			std::cerr << RED << "error: "<< DEF << i << ": "  << e.what() << NON << std::endl;
		}
		line.clear();
		i++;
	}
}

void	BitcoinExchange::extractDb( void ) {
	std::string	line;

	std::getline( this->__dbStream, line, '\n' );
	if (this->__dbStream.eof() || this->__dbStream.fail())
		throw std::runtime_error( INV_DB );
	if (line != "date,exchange_rate")
		throw std::runtime_error( INV_DB );
	line.clear();

	while (true) {
		std::getline(this->__dbStream, line, '\n');
		if (this->__dbStream.eof() && line.length() == 0 )
			break ;
		if (line.length() < 12)
			throw std::runtime_error( INV_DB );
		std::string		date( line.begin(), line.begin() + 10 );
		std::string		exchange_rate( line.begin() + 11, line.end() );
		if (validDate(date) == false)
			throw std::runtime_error( INV_DB );
		if (validValue(exchange_rate) == false)
			throw std::runtime_error( INV_DB );
		this->__Db[date] = std::strtof( exchange_rate.c_str(), NULL );
		line.clear();
	}
}

void	BitcoinExchange::processData( std::string const input ) {
	BitcoinExchange	btc( input );
	btc.extractDb();
	btc.processInputDb();
}
