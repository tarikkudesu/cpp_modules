#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <deque>
# include <stack>
# include <list>

template <typename Type, class Container = std::deque<Type> >
class MutantStack : public std::stack<Type>
{
	public:
		typedef typename std::deque<Type>::iterator					iterator;
		typedef typename std::deque<Type>::const_iterator			const_iterator;
		typedef typename std::deque<Type>::reverse_iterator			reverse_iterator;
		typedef typename std::deque<Type>::const_reverse_iterator	const_reverse_iterator;

		MutantStack() { }
		MutantStack( const MutantStack &copy ) { *this = copy; }
		MutantStack	&operator=( const MutantStack &assign ) {
			std::stack<Type>operator=( assign );
			return *this;
		}
		~MutantStack() { }

		iterator				end( void ) { return this->c.end(); }
		iterator				begin( void ) { return this->c.begin(); }
		const_iterator			cend( void ) const { return this->c.cend(); }
		const_iterator			cbegin( void ) const { return this->c.cbegin(); }
		reverse_iterator		rend( void ) { return this->c.rend(); }
		reverse_iterator		rbegin( void ) { return this->c.rbegin(); }
		const_reverse_iterator	crend( void ) const { return this->c.crend(); }
		const_reverse_iterator	crbegin( void ) const { return this->c.crbegin(); }
};

#endif
