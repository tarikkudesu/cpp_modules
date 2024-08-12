#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template < typename T >
class Array
{
	private :
		unsigned int	__size;
		T				*__arr;

	public:
		Array() : __size( 0 ),  __arr( NULL ) { }
		Array( unsigned int n ) : __size( n ), __arr( new T[n] ) { }
		Array( const Array &copy ) { *this = copy; }
		Array	&operator=( const Array &assign ) {
			if (this != &assign) {
				delete[] this->__arr;
				this->__size = assign.__size;
				this->__arr = new T[this->__size];
				for (unsigned int i = 0; i < this->__size; i++)
					this->__arr[i] = assign.__arr[i];
			}
			return *this;
		}
		~Array() { delete[] this->__arr; }

		T	&operator[]( unsigned int idx ) {
			if (idx >= this->__size)
				throw outOfRange();
			return this->__arr[idx];
		}
		const T	&operator[]( unsigned int idx ) const {
			if (idx >= this->__size)
				throw outOfRange();
			return this->__arr[idx];
		}
		unsigned int	size( void ) const {
			return this->__size;
		}
		class	outOfRange : public std::exception {
			public :
				virtual const char	*what( void ) const throw() { return "error: out of range"; }
		};
};

#endif
