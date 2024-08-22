#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <algorithm>
# include <list>
# include <vector>

# define RED "\033[1;31m"
# define GRE "\033[1;32m"
# define YEL "\033[1;33m"
# define NON "\033[0m"


class BitcoinExchange
{
	private :

	public:
		BitcoinExchange();
		BitcoinExchange( const BitcoinExchange &copy );
		BitcoinExchange	&operator=( const BitcoinExchange &assign );
		~BitcoinExchange();
};

#endif
