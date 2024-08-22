/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:21:06 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/21 17:21:12 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

int main() {
	Base	*ptr = generate();
	Base	&ref = *ptr;

	identify( ptr );
	identify( ref );

	delete ptr;
}
