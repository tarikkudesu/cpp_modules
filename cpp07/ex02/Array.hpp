/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:51:21 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/25 19:33:38 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

class	outOfRange : public std::exception {
	public :
		virtual const char	*what( void ) const throw() {
			return "\033[1;31merror: out of range\033[0m";
		}
};

template < typename T >
class Array
{
	private :
		unsigned int	__size;
		T				*__arr;

	public:
		Array();
		Array( unsigned int n );
		Array( const Array &copy );
		Array	&operator=( const Array &assign );
		~Array();

		T				&operator[]( unsigned int idx );
		const T			&operator[]( unsigned int idx ) const;
		unsigned int	size( void ) const;
};

# include "Array.tpp"

typedef	Array< int >		IArray;
typedef	Array< double >		DArray;

#endif
