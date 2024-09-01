#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <algorithm>
# include <fstream>
# include <sstream>
# include <map>

# define RED "\e[1;31m"
# define DEF "\e[0;39m"
# define YEL "\e[1;33m"
# define NON "\e[0m"

# define INV_ARG		"Usage : ./btc <database.csv>"
# define INV_DB			"a database error"
# define READ_ERR		"I/O error while reading"

class BitcoinExchange
{
	private :
		std::map< std::string, float >		__Db;
		const std::string					__inputDb;
		std::ifstream						__dbStream;
		std::ifstream						__inputStream;

		void	extractDb( void );
		void	processInputDb( void );
		float	processInput( std::string const input );
		bool	validDate( std::string const &date );
		bool	validValue( std::string const &value );

		BitcoinExchange();
		BitcoinExchange( std::string const &input );
		BitcoinExchange( const BitcoinExchange &copy );
		BitcoinExchange	&operator=( const BitcoinExchange &assign );
		~BitcoinExchange();

	public:
		static void	processData( std::string const input );

};

#endif
