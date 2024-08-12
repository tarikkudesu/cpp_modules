#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <class T>
void	incr( T &t ) { t++; }

template <class T>
void	print( T &t ) { std::cout << t << " "; }

template <class T>
void	iter( T *array, size_t lenght, void (*func)(T&) ) {
	for (size_t i = 0; i < lenght; i++)
		func( array[i] );
}

#endif
