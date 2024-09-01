#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <deque>
# include <ctime>

# define RED "\e[1;31m"
# define BOL "\e[1;39m"
# define CYA "\e[1;36m"
# define YEL "\e[1;33m"
# define NON "\e[0m"

class PmergeMe
{
	private :
		typedef	std::vector< int >	iVect;
		typedef	std::deque< int >	iDeq;

		PmergeMe();
		PmergeMe( const PmergeMe &copy );
		PmergeMe	&operator=( const PmergeMe &assign );
		~PmergeMe();

		bool	validValue( std::string const &value );
		void	parse( char **av, iVect &vCon, iDeq &dCon );
		void	generateJNS( iVect &JNS, size_t lenght );
		int		JacobsthalNumbers( int idx );

		template < typename T >
		void	printCon( const T &Con ) {
			typename T::const_iterator it = Con.begin();
			for ( ; it != Con.end() - 1; it++) {
				std::cout << *it << " ";
			} std::cout << *it << std::endl;
		}

		template < typename T >
		void	insertEl( T &Con, int value ) {
			typename T::iterator	iter = std::lower_bound(Con.begin(), Con.end(), value);
			Con.insert(iter, value);
		}

		template < typename T >
		T	insertByJNS( T &Con, T &pending ) {
			iVect		JNS;
			generateJNS( JNS, pending.size() );
			int	size = pending.size();
			for (size_t i = 0; i < JNS.size(); i++) {
				if (JNS.at(i) < size)
					this->insertEl( Con, pending.at(JNS.at(i)));
			}
			this->insertEl( Con, pending.at( 0 ) );
			return Con;
		}

		template < typename T >
		T	Ford_Johnson( T &vCon, T &pending ) {
			T		mainChain;
			for (size_t i = 0; i < vCon.size(); i += 2) {
				if (i + 1 < vCon.size()) {
					int	a = vCon.at( i );
					int	b = vCon.at( i + 1 );
					if (a < b)
						std::swap( a, b );
					mainChain.push_back( a );
					pending.push_back( b );
				} else
					pending.push_back( vCon.at( i ) );
			}
			return mainChain;
		}

		template < typename T >
		T	merge_insert( T Con ) {
			T		pending;
			while (Con.size() > 2)
				Con = Ford_Johnson( Con, pending );
			std::sort(Con.begin(), Con.end());
			if (pending.empty())
				return Con;
			return insertByJNS(Con, pending);
		}

	public:
		static void	mergeInsertionSort( char **av );
};

#endif
