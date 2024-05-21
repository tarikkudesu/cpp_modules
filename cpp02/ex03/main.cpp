#include "Point.hpp"

int	main( void ) {
	if (bsp(Point(0.f, 0.f), Point(5.f, 0.f), Point(0.f, 5.f), Point(1.f, 1.f)))
		std::cout << "point is inside the triangle" << std::endl;
	else
		std::cout << "point is outside the triangle" << std::endl;
	return 0;
}
