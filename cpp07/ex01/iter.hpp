/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:51:13 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/26 09:55:00 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template < typename T >
void	incr( T &t ) {
	t++;
}

template < typename T >
void	printEl( T &t ) {
	std::cout << t << " ";
}

template < typename T, typename F >
void	iter( T *array, size_t lenght, F f ) {
	for (size_t i = 0; i < lenght; i++)
		f( array[i] );
}

#endif
