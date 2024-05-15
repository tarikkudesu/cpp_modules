/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 09:42:19 by tamehri           #+#    #+#             */
/*   Updated: 2024/05/15 10:16:16 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <fstream>

class Sed
{
	private :
		std::string	__str;
		std::string	__filename;

	public :
		Sed( std::string filename );
		~Sed();
		void	replace( std::string s1, std::string s2);
};

#endif