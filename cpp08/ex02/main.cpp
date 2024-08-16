# include "MutantStack.hpp"

int	main( void ) {

	std::cout << "---- Int MutantStack ----" << std::endl;
	MutantStack<int>	MS;

	int	arr[] = {4, 23, 3, 4, 5, 23, 76, 8, 8, 5, 7, 8};

	// Fill the MutantStack
	for (size_t i = 0; i < sizeof(arr) / sizeof(*arr); i++) { MS.push(*(arr + i)); }

	std::cout << "MS size : " << MS.size() << std::endl;
	std::cout << "Ms top : " << MS.top() << std::endl;
	std::cout << "Printing MS using an iterator : ";
	for (MutantStack<int>::iterator iter = MS.begin(); iter != MS.end(); iter++) {
		std::cout << " " << *iter;
	} std::cout << std::endl;

	std::cout << "Printing MS using a reverse iterator : ";
	for (MutantStack<int>::reverse_iterator iter = MS.rbegin(); iter != MS.rend(); iter++) {
		std::cout << " " << *iter;
	} std::cout << std::endl;

	std::cout << "Poping 6 elements : ";
	for (int i = 0; i < 6; i++) { MS.pop(); }
	for (MutantStack<int>::iterator iter = MS.begin(); iter != MS.end(); iter++) {
		std::cout << " " << *iter;
	} std::cout << std::endl;

	// using the copy assignement operator
	std::cout << "Using the copy operator to create a new MS : ";
	MutantStack<int>	newMS(MS);
	for (MutantStack<int>::iterator iter = newMS.begin(); iter != newMS.end(); iter++) {
		std::cout << " " << *iter;
	} std::cout << std::endl;


	/* -------------------------------------------------------------------------------------*/

	std::cout << std::endl << "---- double MutantStack ----" << std::endl;
	MutantStack<double>	DMS;
	double	darr[] = {3.2, 2.3, 5.3, 8.94, 4.5, 23.12};

	// Fill the MutantStack
	for (size_t i = 0; i < sizeof(darr) / sizeof(*darr); i++) { DMS.push(*(darr + i)); }

	std::cout << "DMS size : " << DMS.size() << std::endl;
	std::cout << "DMs top : " << DMS.top() << std::endl;
	std::cout << "Printing DMS using an iterator : ";
	for (MutantStack<double>::iterator iter = DMS.begin(); iter != DMS.end(); iter++) {
		std::cout << "  " << *iter;
	} std::cout << std::endl;


	/* -------------------------------------------------------------------------------------*/

	std::cout << std::endl << "---- list ----" << std::endl;
	std::list<int>	lst;
	// Fill the MutantStack
	for (size_t i = 0; i < sizeof(arr) / sizeof(*arr); i++) { lst.push_back(*(arr + i)); }

	std::cout << "lst size : " << lst.size() << std::endl;
	std::cout << "lst top : " << lst.back() << std::endl;
	std::cout << "Printing lst using an iterator : ";
	for (std::list<int>::iterator iter = lst.begin(); iter != lst.end(); iter++) {
		std::cout << " " << *iter;
	} std::cout << std::endl;

	std::cout << "Printing lst using a reverse iterator : ";
	for (std::list<int>::reverse_iterator iter = lst.rbegin(); iter != lst.rend(); iter++) {
		std::cout << " " << *iter;
	} std::cout << std::endl;

	std::cout << "Poping 6 elements : ";
	for (int i = 0; i < 6; i++) { lst.pop_back(); }
	for (std::list<int>::iterator iter = lst.begin(); iter != lst.end(); iter++) {
		std::cout << " " << *iter;
	} std::cout << std::endl;

	// using the copy assignement operator
	std::cout << "Using the copy operator to create a new lst : ";
	std::list<int>	newlst(lst);
	for (std::list<int>::iterator iter = newlst.begin(); iter != newlst.end(); iter++) {
		std::cout << " " << *iter;
	} std::cout << std::endl;
}
