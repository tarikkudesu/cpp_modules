/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:20:19 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/22 19:17:31 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	this->__impossible[CHARACTER] = false;
	this->__impossible[INTEGER] = false;
	this->__impossible[DOUBLE] = false;
	this->__impossible[FLOAT] = false;
}

ScalarConverter::ScalarConverter( const ScalarConverter &copy ) { (void) copy; }

ScalarConverter::~ScalarConverter() { }

ScalarConverter	&ScalarConverter::operator=( const ScalarConverter &assign ) {
	(void) assign;
	return *this;
}

void	ScalarConverter::printChar( char __c ) {
	std::cout << "char: ";
	if (this->__impossible[CHARACTER])
		std::cout << "impossible" << std::endl;
	else if (!std::isprint(__c))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << __c << std::endl;
}

void	ScalarConverter::printInt( int __i ) {
	std::cout << "int: ";
	if (this->__impossible[INTEGER])
		std::cout << "impossible" << std::endl;
	else
		std::cout << __i << std::endl;
}

void	ScalarConverter::printFloat( float __f ) {
	std::cout << "float: ";
	if (this->__impossible[FLOAT])
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << __f << "f" << std::endl;
}

void	ScalarConverter::printDouble( double __d ) {
	std::cout << "double: ";
	if (this->__impossible[DOUBLE])
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << __d << std::endl;
}


void	ScalarConverter::convertChar( void ) {
	char	__c = this->__input.at( 0 );
	printChar( __c );
	printInt( __c );
	printFloat( __c );
	printDouble( __c );
}

void	ScalarConverter::convertInt( void ) {
	long	i = std::strtol( this->__input.c_str(), NULL, 10 );

	if (i > INT_MAX || i < INT_MIN) {
		this->__impossible[INTEGER] = true;
		this->__impossible[FLOAT] = true;
		this->__impossible[DOUBLE] = true;
	}
	if (i > CHAR_MAX || i < CHAR_MIN)
		this->__impossible[CHARACTER] = true;
	printChar( static_cast< char >( i ) );
	printInt( static_cast< int >( i ) );
	printFloat( i );
	printDouble( i );
}

void	ScalarConverter::convertFloat( void ) {
	this->__input.erase( this->__input.end() - 1 );
	std::stringstream	ss( this->__input );

	float	f;
	ss >> f;
	if (ss.fail()) {
		this->__impossible[FLOAT] = true;
		this->__impossible[DOUBLE] = true;
	}
	if (f > INT_MAX || f < INT_MIN)
		this->__impossible[INTEGER] = true;
	if (f > CHAR_MAX || f < CHAR_MIN)
		this->__impossible[CHARACTER] = true;
	printChar( static_cast< char >( f ) );
	printInt( static_cast< int >( f ) );
	printFloat( static_cast< float >( f ) );
	printDouble( f );
}

void	ScalarConverter::convertDouble( void ) {
	std::stringstream	ss( this->__input );

	double	d;
	ss >> d;
	if (ss.fail())
		this->__impossible[DOUBLE] = true;
	if (d > FLT_MAX || d < -FLT_MAX)
		this->__impossible[FLOAT] = true;
	if (d > INT_MAX || d < INT_MIN)
		this->__impossible[INTEGER] = true;
	if (d > CHAR_MAX || d < CHAR_MIN)
		this->__impossible[CHARACTER] = true;
	printChar( static_cast< char >( d ) );
	printInt( static_cast< int >( d ) );
	printFloat( static_cast< float >( d ) );
	printDouble( d );
}

bool	ScalarConverter::isChar( void ) {
	if ( this->__input.length() == 1 && !std::isdigit( this->__input.at( 0 ) ) )
		return true;
	return false;
}

bool	ScalarConverter::isInt( void ) {
	size_t	i = 0;
	i = ( this->__input.at( 0 ) == '+' || this->__input.at( 0 ) == '-');
	for ( ; i < this->__input.length(); i++)
		if (!std::isdigit( this->__input.at( i ) )) { return false; }
	return true;
}

bool	ScalarConverter::isFloat( void ) {
	if (this->__input.find( '.' ) == std::string::npos)
		return false;
	else if (this->__input.find( '.', this->__input.find( '.' ) + 1 ) != std::string::npos)
		return false;
	if (this->__input.find( 'f' ) == std::string::npos)
		return false;
	else if (this->__input.at( this->__input.length() - 1) != 'f')
		return false;
	else if (this->__input.find( 'f', this->__input.find( 'f' ) + 1 ) != std::string::npos)
		return false;
	size_t	i = 0;
	i = ( this->__input.at( 0 ) == '+' || this->__input.at( 0 ) == '-');
	for ( ; i < this->__input.length(); i++)
		if (!std::isdigit(__input.at( i )) && __input.at( i ) != '.' && __input.at( i ) != 'f') { return false; }
	return true;
}

bool	ScalarConverter::isDouble( void ) {
	if (this->__input.find( '.' ) == std::string::npos)
		return false;
	else if (this->__input.find( '.', this->__input.find( '.' ) + 1 ) != std::string::npos)
		return false;
	size_t	i = 0;
	i = ( this->__input.at( 0 ) == '+' || this->__input.at( 0 ) == '-');
	for ( ; i < this->__input.length(); i++)
		if (!std::isdigit(__input.at( i )) && __input.at( i ) != '.') { return false; }
	return true;
}

enum e_type	ScalarConverter::getType( void ) {
	if ( this->isChar() )
		return CHARACTER;
	else if ( this->isInt() )
		return INTEGER;
	else if ( this->isFloat() )
		return FLOAT;
	else if ( this->isDouble() )
		return DOUBLE;
	return INVALID;
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
		switch ( obj.getType() ) {
			case CHARACTER :
				return obj.convertChar();
			case INTEGER :
				return obj.convertInt();
			case FLOAT :
				return obj.convertFloat();
			case DOUBLE :
				return obj.convertDouble();
			case INVALID :
				std::cout << "Error: invalid type" << std::endl;
		}
	}
}
