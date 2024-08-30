#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <deque>

# define RED "\e[31m"
# define NON "\e[0m"

class PmergeMe
{
	private :
		PmergeMe();
		PmergeMe( const PmergeMe &copy );
		PmergeMe	&operator=( const PmergeMe &assign );
		~PmergeMe();

		void	parse( char **av, std::vector< int > &vCon, std::deque< int > &dCon );
		bool	validValue( std::string const &value );

		std::vector< int >		merge_insert_vector( std::vector< int > &vCon );

	public:
		static void	merge_insert_sort( char **av );
};

#endif
