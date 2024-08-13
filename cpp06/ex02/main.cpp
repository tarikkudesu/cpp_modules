#include "Class.hpp"

int main() {
	Base	*ptr = generate();
	Base	&ref = *ptr;

	identify(ptr);
	identify(ref);

	delete ptr;
}
