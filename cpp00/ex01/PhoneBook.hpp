/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:11:09 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/30 14:52:59 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"


class	PhoneBook
{
	private :
		Contact	contacts[8];
	
	public :
		PhoneBook( void );
		~PhoneBook();
	
		void	add( void );
		void	search( void );
		void	menu( void );
};

#endif