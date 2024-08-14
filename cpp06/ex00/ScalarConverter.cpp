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
	std::cout << "char: ";
	if (!std::isprint(__c))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << __c << std::endl;
	std::cout << "int: " << __i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << __f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << __d << std::endl;
}

void	ScalarConverter::typeConversion( enum e_type __type ) {
	std::stringstream	ss(__input);
std::cout << static_cast<char>(__type) << std::endl;
	switch (__type) {
		case CHARACTER:
			__c = __input.at(0);
			__i = static_cast< int >(__c);
			__f = static_cast< float >(__c);
			__d = static_cast< double >(__c);
			break ;
		case INTEGER:
			ss >> __i;
			__c = static_cast< char >(__i);
			__f = static_cast< float >(__i);
			__d = static_cast< double >(__i);
			break ;
		case FLOAT:
			ss >> __f;
			__c = static_cast< char >(__f);
			__i = static_cast< int >(__f);
			__d = static_cast< double >(__f);
			break ;
		case DOUBLE:
			ss >> __d;
			__c = static_cast< char >(__d);
			__i = static_cast< int >(__d);
			__f = static_cast< float >(__d);
			break ;
		case INVALID:
			std::cout << "Error: invalid type" << std::endl;
			return ;
	}
	this->printConversion();
}

enum e_type	ScalarConverter::setType( void ) {
	size_t	i = 0;

	if (__input.length() == 1 && !std::isdigit(__input.at(0)))
		return CHARACTER;

	i = (__input.at(0) == '+' || __input.at(0) == '-');
	for ( ; i < __input.length(); i++) {
		if (!std::isdigit(__input.at(i)) \
					&& __input.at(i) != '.' \
					&& __input.at(i) != 'f' \
					&& __input.at(i) != 'F')
			break ;
	}
	if (i != __input.length() || ( __input.find('.') != std::string::npos \
		&& (__input.find('.', __input.find('.') + 1) != std::string::npos \
		|| __input.find('f', __input.find('f') + 1) != std::string::npos) ))
		return INVALID;

	if (__input.find('.') != std::string::npos && __input.at(i - 1) == 'f') {
		__input.at(i - 1) = '\0';
		return FLOAT;
	}
	if (__input.find('.') != std::string::npos)
		return DOUBLE;
	return INTEGER;
}

void	ScalarConverter::convert( std::string const input ) {
	ScalarConverter	obj;

	obj.__input = input;
	if (input.empty())
		std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible" << std::endl;
	else if (input == "nan" || input == "+nan" || input == "nanf" || input == "+nanf" || input == "-nan" || input == "-nanf")
		std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan" << std::endl;
	else if (input == "+inf" || input == "+inff" || input == "inff" || input == "inf" )
		std::cout << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf" << std::endl;
	else if (input == "-inf" || input == "-inff" )
		std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf" << std::endl;
	else
		obj.typeConversion( obj.setType() );
}
