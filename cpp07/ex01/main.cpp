#include "iter.hpp"

int	main( void ) {

	double	dArr[] = { 1.2, 2.5, 4.1, 5.3, 6.8, 7.5, 8.5, 9.0};
	int		iArr[] = { 1, 2, 4, 5, 6, 7, 8, 9};

	size_t	iSize = sizeof(iArr) / sizeof(iArr[0]);
	size_t	dSize = sizeof(iArr) / sizeof(iArr[0]);

	::iter(iArr, iSize, &print);
	std::cout << std::endl;

	::iter(iArr, iSize, &incr);

	::iter(iArr, iSize, &print);
	std::cout << std::endl;

	::iter(dArr, dSize, &print);
	std::cout << std::endl;

	::iter(dArr, dSize, &incr);

	::iter(dArr, dSize, &print);
	std::cout << std::endl;

}
