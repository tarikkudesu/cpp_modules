#ifndef ANYTHING_HPP
# define ANYTHING_HPP

# include <iostream>

template <class T>
void	swap( T &t, T &a ) {
	T	temp = t;
	t = a;
	a = temp;
}

template <class T>
T	max( T t, T a ) {
	if (t < a)
		return t;
	return a;
}

template <class T>
T	min( T t, T a ) {
	if (t > a)
		return t;
	return a;
}

#endif
