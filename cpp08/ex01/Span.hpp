/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:56:32 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/27 16:56:33 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class Span
{
	private :
		unsigned int		N;
		std::vector< int >	__inventory;

	public:
		Span();
		Span( unsigned int n );
		Span( const Span &copy );
		Span	&operator=( const Span &assign );
		~Span();

		void			fillContainer( void );
		void			addNumber( int nbr );
		size_t			shortestSpan( void );
		size_t			longestSpan( void );

		class	fullContainer : public std::exception {
			public :
				virtual const char *what( void ) const throw();
		};
		class	emptyContainer : public std::exception {
			public :
				virtual const char *what( void ) const throw();
		};
};

#endif
