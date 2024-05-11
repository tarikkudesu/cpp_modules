/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 09:42:22 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/10 20:26:20 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed( std::string filename ) : _filename(filename) { // the constructor initializer list

}

Sed::~Sed() {

}

void Sed::replace( std::string s1, std::string s2 ) {
	std::string		outfile(this->_filename + ".replace");
	std::ifstream	fis(this->_filename);

	if (fis.is_open()) {
		std::ofstream	fos(outfile);

		if (fos.is_open()) { 
			std::string	input;
			std::getline(fis, input, '\0');

			if (!fis.fail()) {
				int	pos = 0;
				std::string::iterator	iter;
				while ( true ) {
					pos = input.find(s1);
					if (-1 == pos)
						break ;
					iter = input.begin() + pos;
					input.erase(iter, iter + s1.length());
					input.insert(pos, s2);
				}
				fos << input;
			} else
				std::cerr << "Error reading from " << this->_filename << std::endl;
			fos.close();
		} else
			std::cerr << "Error opening : " << outfile << std::endl;
		fis.close();
	} else
		std::cerr << "Error opening : " << this->_filename << std::endl;
}
