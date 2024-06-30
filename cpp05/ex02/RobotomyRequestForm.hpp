/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 17:27:06 by tamehri           #+#    #+#             */
/*   Updated: 2024/06/30 17:39:37 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RRFORM_HPP__
# define __RRFORM_HPP__

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class	RobotomyRequestForm : public AForm
{
	public :
		RobotomyRequestForm();
		RobotomyRequestForm( const RobotomyRequestForm &src );
		RobotomyRequestForm	&operator=( const RobotomyRequestForm &rhs );
		~RobotomyRequestForm();
};

#endif
