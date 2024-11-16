/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:20:22 by tamehri           #+#    #+#             */
/*   Updated: 2024/11/16 17:27:05 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <cfloat>
# include <limits.h>

typedef enum	e_type {
	CHARACTER = 0,
	INTEGER = 1,
	DOUBLE = 3,
	FLOAT = 2,
	INVALID = 4
}				t_type;

class ScalarConverter
{
	private :
		bool				__impossible[4];
		std::string			__input;

		ScalarConverter();

		void				printChar( char __c );
		void				printInt( int __i );
		void				printFloat( float __f );
		void				printDouble( double __d );

		void				convertChar( void );
		void				convertInt( void );
		void				convertFloat( void );
		void				convertDouble( void );

		bool				isInt( void );
		bool				isChar( void );
		bool				isFloat( void );
		bool				isDouble( void );

		enum e_type			getType( void );

	public:
		ScalarConverter( const ScalarConverter &copy );
		ScalarConverter		&operator=( const ScalarConverter &assign );
		~ScalarConverter();

		static void			convert( std::string const input );
};

#endif
