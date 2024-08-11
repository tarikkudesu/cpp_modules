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

void	ScalarConverter::typeConvertion( void ) {
	std::stringstream	ss;

	switch (__type) {
		case CHARACTER:
			ss << __input;
			__c = __input.at(0);
			__i = static_cast< int >(__c);
			__f = static_cast< float >(__c);
			__d = static_cast< double >(__c);
			break ;
		case INTEGER:
			ss << __input;
			ss >> __i;
			__c = static_cast< char >(__i);
			__f = static_cast< float >(__i);
			__d = static_cast< double >(__i);
			break ;
		case FLOAT:
			__input.erase(__input.length() - 1);
			ss << __input;
			ss >> __f;
			__c = static_cast< char >(__f);
			__i = static_cast< int >(__f);
			__d = static_cast< double >(__f);
			break ;
		case DOUBLE:
			ss << __input;
			ss >> __d;
			__c = static_cast< char >(__d);
			__i = static_cast< int >(__d);
			__f = static_cast< float >(__d);
			break ;
	}
}

enum e_type	ScalarConverter::setType( void ) {
	size_t	i = 0;

	if (__input.length() == 1 && ((__input.at(0) == '+' || __input.at(0) == '-')))
		return CHARACTER;
	if ((__input.at(0) == '+' || __input.at(0) == '-') && !std::isdigit(__input.at(1)))
		return CHARACTER;
	if (!std::isdigit(__input.at(0)) && __input.at(0) != '+' && __input.at(0) != '-')
		return CHARACTER;

	(__input.at(0) == '+' || __input.at(0) == '-') ? i++ : false;
	for ( ; i < __input.length(); i++) {
		if (!std::isdigit(__input.at(i)) && __input.at(i) != '.' && __input.at(i) != 'f')
			break ;
	}
	this->__input = this->__input.substr(0, i);
	size_t	pos = this->__input.find('.');
	if (pos != std::string::npos) {
		pos = this->__input.find('f');
		if (pos != std::string::npos)
			return FLOAT;
		return DOUBLE;
	}
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
	else {
		obj.__type = obj.setType();
		std::cout << static_cast<char>(obj.__type) << "\n";
		obj.typeConvertion();
		obj.printConversion();
	}
}
