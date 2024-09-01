/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:56:37 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/27 16:58:27 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>
# include <list>

template <typename Type, class Con = std::deque<Type> >
class MutantStack : public std::stack< Type, Con >
{
	public:
		typedef typename Con::iterator					iterator;
		typedef typename Con::const_iterator			const_iterator;
		typedef typename Con::reverse_iterator			reverse_iterator;
		typedef typename Con::const_reverse_iterator	const_reverse_iterator;

		MutantStack() { }
		~MutantStack() { }
		MutantStack( const MutantStack &copy ) : std::stack<Type>( copy ) { }
		MutantStack	&operator=( const MutantStack &assign ) {
			std::stack< Type, Con >::operator=( assign );
			return *this;
		}

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
