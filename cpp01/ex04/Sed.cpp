/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 09:42:22 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/17 16:56:11 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed( std::string filename ) : __filename(filename) {

}

Sed::~Sed() {

}

void	Sed::replace( std::string s1, std::string s2) {
	std::ifstream	inputFile(this->__filename);
	if (inputFile.is_open()) {
		std::string		outputFileName = this->__filename;
		std::ofstream	outputFile(outputFileName.append(".replace"));
		if (outputFile.is_open()) {
			std::string	input;
			std::getline(inputFile, input);
			if (!inputFile.fail() && !input.empty()) {
				std::string::iterator	iter;
				int						pos;
				while (true) {
					pos = input.find(s1);
					if (pos == std::string::npos)
						break ;
					iter = input.begin() + pos;
					input.erase(iter, iter + s1.length());
					input.insert(pos, s2);
				}
				outputFile << input;
			}
			outputFile.close();
		} else
			std::cerr << "Error opening : " << outputFileName << std::endl;
		inputFile.close();
	} else
		std::cerr << "Error opening : " << this->__filename << std::endl;
}
