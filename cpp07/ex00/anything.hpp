/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anything.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:51:05 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/26 09:39:06 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANYTHING_HPP
# define ANYTHING_HPP

template <class T>
void	swap( T &t, T &a ) {
	T	temp = t;
	t = a;
	a = temp;
}

template <class T>
T	max( T t, T a ) {
	return t > a ? t : a;
}

template <class T>
T	min( T t, T a ) {
	return t < a ? t : a;
}

#endif
