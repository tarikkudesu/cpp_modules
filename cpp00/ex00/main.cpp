#include <iostream>

int main(int ac, char **av) {
	std::string str;
	char		c;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {
		for (int i = 1; i < ac; i++) {
			str = *(av + i);
			for (size_t j = 0; j < str.length(); j++) {
				c = str[j];
				if (c >= 'a' && c <= 'z')
					c -= 32;
				std::cout << c;
			}
		}
	}
	std::cout << std::endl;
	return (0);
}