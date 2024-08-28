#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <algorithm>
# include <fstream>
# include <sstream>
# include <map>

# define RED "\e[31m"
# define NON "\e[0m"

# define INV_ARG		"Usage : ./btc <database.csv>"
# define INV_DB			"Error: a database error"
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

		class	btcException : public std::exception {
			protected :
				const char	*__error;
			public : 
				btcException( const char *error );
				virtual const char	*what( void ) const throw();
		};

	public:
		BitcoinExchange();
		BitcoinExchange( std::string const &input );
		BitcoinExchange( const BitcoinExchange &copy );
		BitcoinExchange	&operator=( const BitcoinExchange &assign );
		~BitcoinExchange();

		void	processData( void );

};

#endif
