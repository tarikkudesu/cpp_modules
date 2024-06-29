/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:10:57 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/23 15:23:46 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "PhoneBook.hpp"

class	Contact
{
	private :
		int			__index;
		static int	__nbContacts;
		std::string	__firstname;
		std::string	__lastname;
		std::string	__nickname;
		std::string	__phonenumber;
		std::string	__darkestsecret;
		void	print_feild( std::string feild );
	
	public :
		Contact( void );
		~Contact( void );

		void	set_index( int i );
		void	new_contact( void );
		void	display_contact( void );
		void	display_full_contact( void );
};

#endif