#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <sstream>

typedef enum	e_type {
	CHARACTER = 'C',
	INTEGER = 'I',
	DOUBLE = 'D',
	FLOAT = 'F',
	INVALID = '$'
}				t_type;

class ScalarConverter
{
	private :
		std::string		__input;
		char			__c;
		int				__i;
		float			__f;
		double			__d;

		ScalarConverter();

		enum e_type		setType( void );
		void			printConversion( void );
		void			typeConversion( enum e_type __type );

	public:
		ScalarConverter( const ScalarConverter &copy );
		ScalarConverter	&operator=( const ScalarConverter &assign );
		~ScalarConverter();

		static void	convert( std::string const input );
};

#endif
