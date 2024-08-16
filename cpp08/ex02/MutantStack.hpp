#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>
# include <list>


template <typename Type>
class MutantStack : public std::stack<Type>
{
	public:
		MutantStack() { }
		MutantStack( const MutantStack &copy ) { (void)copy; }
		MutantStack	&operator=( const MutantStack &assign ) {
			(void)assign;
			return *this;
		}
		~MutantStack() { }
};

#endif
