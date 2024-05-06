/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:11:09 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/05 14:46:45 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK
# define PHONEBOOK

# include <iostream>
# include "Contact.hpp"

class	PhoneBook
{
	private :
		Contact	contacts[8];

	public :
		PhoneBook();
		~PhoneBook();

		void	init();
		void	add();
		void	search();
};

#endif