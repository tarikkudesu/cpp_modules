#include "Class.hpp"

void	identify( Base *p ) {
	if (dynamic_cast< A* >(p)) {
		std::cout << "Pointer is of type A" << std::endl;
		return ;
	}
	if (dynamic_cast< B* >(p)) {
		std::cout << "Pointer is of type B" << std::endl;
		return ;
	}
	if (dynamic_cast< C* >(p)) {
		std::cout << "Pointer is of type C" << std::endl;
		return ;
	}
}

void	identify( Base &p ) {
	try {
		A	&ref = dynamic_cast< A& >(p);
		std::cout << "Reference is of type A" << std::endl;
		(void)ref;
		return ;
	} catch ( std::exception &e ) { }

	try {
		B	&ref = dynamic_cast< B& >(p);
		std::cout << "Reference is of type B" << std::endl;
		(void)ref;
		return ;
	} catch ( std::exception &e ) { }

	try {
		C	&ref = dynamic_cast< C& >(p);
		std::cout << "Reference is of type C" << std::endl;
		(void)ref;
		return ;
	} catch ( std::exception &e ) { }
}