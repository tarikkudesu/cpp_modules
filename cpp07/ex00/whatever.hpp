/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:38:34 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/26 09:38:35 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

class Whatever
{
	private :
		std::string	__whatever;

	public:
		Whatever();
		Whatever( std::string const &whatever );
		Whatever( const Whatever &copy );
		Whatever	&operator=( const Whatever &assign );
		~Whatever();

		bool	operator==( Whatever const & rhs ) const;
		bool	operator!=( Whatever const & rhs ) const;
		bool	operator>( Whatever const & rhs ) const;
		bool	operator<( Whatever const & rhs ) const;
		bool	operator>=( Whatever const & rhs ) const;
		bool	operator<=( Whatever const & rhs ) const;

		std::string getWhatever() const;
};

std::ostream	&operator<<( std::ostream &o, const Whatever &a );

#endif
