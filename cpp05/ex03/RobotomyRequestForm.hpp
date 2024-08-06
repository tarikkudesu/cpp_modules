/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:46:50 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/06 11:46:51 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string	__target;
		
	public:
		RobotomyRequestForm();
		RobotomyRequestForm( std::string const target );
		RobotomyRequestForm( const RobotomyRequestForm &copy );
		RobotomyRequestForm	&operator=( const RobotomyRequestForm &assign );
		~RobotomyRequestForm();

		void	formAction( void ) const ;
};

#endif