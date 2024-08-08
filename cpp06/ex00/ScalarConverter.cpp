#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
}

ScalarConverter::ScalarConverter( const ScalarConverter &copy ) {
	(void) copy;
}

ScalarConverter::~ScalarConverter() {
}

ScalarConverter	&ScalarConverter::operator=( const ScalarConverter &assign ) {
	(void) assign;
	return *this;
}

void	ScalarConverter::printConversion( void ) {
	if ( std::isprint(this->__char) )
		std::cout << "char: " << this->__char << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << this->__int << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << this->__float << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << this->__double << std::endl;
}

void	ScalarConverter::typeConvertion( void ) {
	if (this->__type == CHARACTER) {
		this->__char = this->__input.at(0);
		this->__int = static_cast<int>(this->__char);
		this->__float = static_cast<float>(this->__char);
		this->__double = static_cast<int>(this->__char);
	} else if (this->__type == INTEGER) {
		this->__int = std::stoi(this->__input, NULL);
		this->__char = static_cast<char>(this->__int);
		this->__float = static_cast<float>(this->__int);
		this->__double = static_cast<int>(this->__int);
	} else {
		this->__double = std::stod(this->__input, NULL);
		this->__float = std::stof(this->__input, NULL);
		this->__int = static_cast<int>(this->__float);
		this->__char = static_cast<int>(this->__char);
	}
}

void	ScalarConverter::setType( void ) {
	size_t	i = 0;

	if (std::isprint(__input.at(0)) && !std::isdigit(__input.at(0)) && __input.at(0) != '+' && __input.at(0) != '-') {
		__type = CHARACTER;
		this->__input = this->__input.substr(0, 1);
		return ;
	}

	if ((__input.at(0) == '+' || __input.at(0) == '-') && __input.length() == 1) {
		__type = CHARACTER;
		__input = __input.substr(0, 1);
		return ;
	}

	(__input.at(0) == '+' || __input.at(0) == '-') ? i++ : false;
	for ( ; i < this->__input.length(); i++) {
		if ((!std::isdigit(this->__input.at(i)) && this->__input.at(i) != '.') || this->__input.at(i) == 'f')
			break ;
	}

	this->__input = this->__input.substr(0, i);
	size_t	pos = this->__input.find('.');
	if (pos == std::string::npos) {
		__type = INTEGER;
		return ;
	}

	pos = this->__input.find('f');
	if (pos != std::string::npos) {
		__type = FLOAT;
		return ;
	}

	this->__type = DOUBLE;
}

void	ScalarConverter::parseInput( std::string const input ) {
	this->__input = input;
	if (input.empty())
		throw excep( "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible" );
	else if (!input.compare( "nan" ))
		throw excep( "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan" );
	else if (!input.compare( "+inf" ) || !input.compare( "+inff" ))
		throw excep( "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf" );
	else if (!input.compare( "-inf" ) || !input.compare( "-inff" ))
		throw excep( "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf" );
}

void	ScalarConverter::convert( std::string const input ) {
	ScalarConverter	obj;

	try {
		obj.parseInput( input );
		obj.setType();
		try {
			obj.typeConvertion();
			obj.printConversion();
		} catch ( std::exception &e ) {
			std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible" << std::endl;
		}
	} catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
}

ScalarConverter::excep::excep( const char *error ) : __error( error ) { }
const char	*ScalarConverter::excep::what( void ) const throw() { return __error; }
