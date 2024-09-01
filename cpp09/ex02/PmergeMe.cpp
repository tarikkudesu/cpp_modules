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

int	PmergeMe::JacobsthalNumbers( int idx ) {
	if (idx == 0)
		return 0;
	else if (idx == 1)
		return 1;
	return JacobsthalNumbers( idx - 1 ) + 2 * JacobsthalNumbers( idx - 2 );
}

void	PmergeMe::generateJNS( iVect &JNS, size_t lenght ) {
	int i = 1;
	while (true) {
		if (JNS.size() >= lenght)
			break ;
		int	JN = JacobsthalNumbers( i );
		int prevJN = JacobsthalNumbers( i - 1 );
		while (JN > prevJN)
			JNS.push_back( JN-- );
		i++;
	}
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

void	PmergeMe::parse( char **av, iVect &vCon, iDeq &dCon ) {
	if (!av)
		throw std::runtime_error( "invalid input" );
	while (av && *av) {
		if (!validValue(*av))
			throw std::runtime_error( "invalid input" );
		if (**av == '-')
			throw std::runtime_error( "negative numbers" );
		long	value = std::strtol( *av, NULL, 10 );
		if (value > INT_MAX)
			throw std::runtime_error( "out of range" );
		vCon.push_back( static_cast< int >( value ) );
		dCon.push_back( static_cast< int >( value ) );
		av++;
	}
}

void	PmergeMe::mergeInsertionSort( char **av ) {
	PmergeMe	PmM;
	iVect		vCon;
	iDeq		dCon;

	PmM.parse( av, vCon, dCon );

	if (vCon.size() < 2 || dCon.size() < 2)
		throw std::runtime_error( "invalid size" );

	std::cout << YEL << "Before:\t" << BOL;
	PmM.printCon( vCon );

	clock_t	before = clock();
	vCon = PmM.merge_insert( vCon );
	clock_t	after = clock();

	std::cout << YEL << "After:\t" << BOL;
	PmM.printCon( vCon );
	std::cout	<< "Time to process a range of " << vCon.size()
				<< " elements with" << CYA << " std::vector\t" << BOL
				<< ": " << after - before << " µs" << std::endl;

	before = clock();
	dCon = PmM.merge_insert( dCon );
	after = clock();
	std::cout	<< "Time to process a range of " << dCon.size()
				<< " elements with" << CYA << " std::deque\t" << BOL
				<< ": " << after - before << " µs" << std::endl << NON;
}
