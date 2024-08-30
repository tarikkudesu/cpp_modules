#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {

}

PmergeMe::PmergeMe( const PmergeMe &copy ) {

	(void) copy;
}

PmergeMe::~PmergeMe() {

}

PmergeMe	&PmergeMe::operator=( const PmergeMe &assign ) {
	(void) assign;
	return *this;
}

bool	PmergeMe::validValue( std::string const &value ) {
	size_t	i = 0;
	if (value.empty())
		return false;
	i = ( value.at( 0 ) == '+' || value.at( 0 ) == '-' );
	for ( ; i < value.length(); i++)
		if (!std::isdigit( value.at( i ) ) && value.at( i ) != '.') { return false; }
	return true;
}

void	PmergeMe::parse( char **av, std::vector< int > &vCon, std::deque< int > &dCon ) {
	while (av && *av) {
		if (!validValue(*av))
			throw std::runtime_error( "Error: invalid input" );
		if (**av == '-')
			throw std::runtime_error( "Error: negative numbers" );
		long	value = std::strtol(*av, NULL, 10);
		if (value > INT_MAX)
			throw std::runtime_error( "Error: out of range number" );
		vCon.push_back(static_cast< int >(value));
		dCon.push_back(static_cast< int >(value));
		av++;
	}
}

std::vector< int >	PmergeMe::merge_insert_vector( std::vector< int > &vCon ) {
	std::vector< int >	chainA;

	
}

void	PmergeMe::merge_insert_sort( char **av ) {
	PmergeMe			PmM;
	std::vector< int >	vCon;
	std::deque< int >	dCon;

	try {
		PmM.parse( av, vCon, dCon );

		vCon = PmM.merge_insert_vector( vCon );
	} catch ( std::exception &e ) {
		std::cout << RED << e.what() << NON << std::endl;
	}
}
