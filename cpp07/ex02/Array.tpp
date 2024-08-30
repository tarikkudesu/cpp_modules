/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:56:26 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/26 10:09:16 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template < typename T >
Array<T>::Array() : __size( 0 ),  __arr( NULL ) {

}

template < typename T >
Array<T>::Array( unsigned int n ) : __size( n ), __arr( new T[n] ) {

}

template < typename T >
Array<T>::Array( const Array &copy ) : __size( copy.__size ), __arr( new T[copy.__size] ) {
	for (unsigned int i = 0; i < this->__size; i++)
		this->__arr[i] = copy.__arr[i];
}

template < typename T >
Array<T>	&Array<T>::operator=( const Array &assign ) {
	if (this != &assign) {
		delete[] this->__arr;
		this->__size = assign.__size;
		this->__arr = new T[this->__size];
		for (unsigned int i = 0; i < this->__size; i++)
			this->__arr[i] = assign.__arr[i];
	}
	return *this;
}

template < typename T >
Array<T>::~Array() {
	delete[] this->__arr;
}

template < typename T >
T	&Array<T>::operator[]( unsigned int idx ) {
	return idx < this->__size ? this->__arr[idx] : throw outOfRange();
}

template < typename T >
const T	&Array<T>::operator[]( unsigned int idx ) const {
	return idx < this->__size ? this->__arr[idx] : throw outOfRange();
}

template < typename T >
unsigned int	Array<T>::size( void ) const {
	return this->__size;
}
