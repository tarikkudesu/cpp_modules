#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <cmath>

typedef enum e_type {
	CHARACTER,
	INTEGER,
	DOUBLE,
	FLOAT
} t_type;

class ScalarConverter
{
	private :
		std::string		__input;
		char			__char;
		int				__int;
		float			__float;
		double			__double;
		t_type			__type;

		ScalarConverter();

		void	parseInput( std::string const input );
		void	setType( void );
		void	typeConvertion( void );
		void	printConversion( void );

		class excep : public std::exception {
			public :
				const char	*__error;
				excep( const char *error );
				virtual const char	*what( void ) const throw();
		};

	public:
		ScalarConverter( const ScalarConverter &copy );
		ScalarConverter	&operator=( const ScalarConverter &assign );
		~ScalarConverter();

		static void	convert( std::string const input );
};

#endif
