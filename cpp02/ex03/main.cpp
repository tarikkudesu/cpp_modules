#include "Point.hpp"

int	main( void ) {
	Point a(6.f, 10.f);
	Point b(3.f, 3.f);
	Point c(15.f, 5.f);
	Point point(7.f, 6.f);

	std::cout << bsp(a, b, c, point) << std::endl;
	return 0;
}
