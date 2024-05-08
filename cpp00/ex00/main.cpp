/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 10:33:46 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/07 10:33:47 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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