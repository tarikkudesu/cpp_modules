/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:21:28 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/08 20:19:48 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main( int ac, char **av ) {
	std::string	infile;
	std::string	outfile;
	std::string	s1;
	std::string	s2;

	if (ac != 4) {
		std::cerr << "Error : wrong number of arguments" << std::endl;
		return 1;
	} else if (!**(av + 1) || !**(av + 2) || !**(av + 3)) {
		std::cerr << "Error : empty argument" << std::endl;
		return 1;
	}

	infile = *(av + 1);
	outfile = *(av + 1);
	outfile.append(".replace");
	s1 = *(av + 2);
	s2 = *(av + 3);

	std::ifstream	file(infile);
	if (!file.is_open()) {
		std::cerr << "Error opening the file" << std::endl;
		return 1;
	}
	std::ifstream	tmp(infile);
	if (!tmp.is_open()) {
		std::cerr << "Error opening the file" << std::endl;
		return 1;
	}
	std::string	full;
	std::getline(tmp, full);
	tmp.close();

	std::ofstream	sed(outfile, std::ios::trunc);
	if (!sed.is_open()) {
		std::cerr << "Error opening the file" << std::endl;
		file.close();
		return 1;
	}

	std::string	input;
	int	i = 0;
	while (true) {
		if (file.eof() || file.fail())
			break ;
		file >> input;
		// while (true) {
		// 	char c = full[i];
		// 	if (c == input[0] || !full[i])
		// 		break ;
		// 	std::cout << c;
		// 	i++;
		// }
		i += input.length();
		if (input == s1)
			input = s2;
		std::cout << input;
	}
	std::cout << std::endl;
	file.close();
	sed.close();
	return 0;
}
