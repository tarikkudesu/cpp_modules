#include "Class.hpp"

int rand( void ) {
	char	c;
	uintptr_t	add = reinterpret_cast<uintptr_t>(&c);
	return add % 3;
}

Base	*generate( void ) {
	Base	*ptr;

	switch (rand()) {
		case 0:
			ptr = new	A();
			std::cout << "A" << "\n";
			break ;
		case 1:
			std::cout << "B" << "\n";
			ptr = new	B();
			break ;
		case 2:
			std::cout << "C" << "\n";
			ptr = new	C();
			break ;
	}
	return ptr;
}
