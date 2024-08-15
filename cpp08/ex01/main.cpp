#include "Span.hpp"

int	main( void ) {
    Span    sp(4);

    for (std::vector<int>::iterator iter = sp.inventory.begin(); iter != sp.inventory.end(); iter++) {
        std::cout << "-" << *iter << "- ";
    } std::cout << std::endl;

    try {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
    } catch( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }

    for (std::vector<int>::iterator iter = sp.inventory.begin(); iter != sp.inventory.end(); iter++) {
        std::cout << "-" << *iter << "- ";
    } std::cout << std::endl;
}
