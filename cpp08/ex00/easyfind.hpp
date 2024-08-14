#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <deque>
# include <list>

class	notFound : public std::exception {
	public : virtual const char	*what( void ) const throw() { return "\033[1;31merror: element not found\033[0m"; }
};

class	emptyContainer : public std::exception {
	public : virtual const char	*what( void ) const throw() { return "\033[1;31merror: empty container\033[0m"; }
};

template< typename T >
int	easyfind( T &container, int elem ) {
	if (container.empty())
		throw emptyContainer();
	typename T::iterator	res = std::find(container.begin(), container.end(), elem);
	if (res == container.end())
		throw notFound();
	return *res;
}

#endif
