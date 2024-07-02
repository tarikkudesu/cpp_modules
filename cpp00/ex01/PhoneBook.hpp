/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:11:09 by tamehri           #+#    #+#             */
/*   Updated: 2024/07/01 18:21:53 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"


class	PhoneBook
{
	private :
		int		nbrContacts;
		Contact	contacts[8];
	
	public :
		PhoneBook();
		~PhoneBook();
	
		void	add( void );
		void	search( void );
		void	menu( void );
};

#endif