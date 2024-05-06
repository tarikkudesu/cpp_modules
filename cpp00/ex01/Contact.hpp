/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:10:57 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/05 15:07:01 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT
# define CONTACT

# include "PhoneBook.hpp"

class Contact
{
	private	:
		int			index;
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string darkestsecret;

	public :
	
		Contact();
		~Contact();
		
		void	set_index(int i);
		void	new_contact();
		void	print_contact();
		void	print_full_contact();
};

#endif