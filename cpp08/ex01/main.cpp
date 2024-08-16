#include "Span.hpp"

int	main( void ) {

	// test adding more than the size specified
	try {
		Span    sp(1);

		sp.addNumber( 5 );
		sp.addNumber( 4 );
	} catch( std::exception &e ) { std::cout << e.what() << std::endl; }

	// getting shortest/longest span with an object that has one element
	try {
		Span    sp(1);

		sp.addNumber( 5 );
		std::cout << sp.shortestSpan() << std::endl << sp.longestSpan() << std::endl;
	} catch( std::exception &e ) { std::cout << e.what() << std::endl; }

	// test 5 elements
	try {
		Span    sp(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl << sp.longestSpan() << std::endl;
    } catch( std::exception &e ) { std::cout << e.what() << std::endl; }

	// test 20000 elements
	try {
		Span    sp(5);
	
		sp.fillContainer();
		std::cout << sp.shortestSpan() << std::endl << sp.longestSpan() << std::endl;
    } catch( std::exception &e ) { std::cout << e.what() << std::endl; }

	return 0;
}
