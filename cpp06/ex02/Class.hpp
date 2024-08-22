/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:20:57 by tamehri           #+#    #+#             */
/*   Updated: 2024/08/21 17:20:58 by tamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
# define CLASS_HPP

# include <iostream>

class Base { public : virtual ~Base() { } };

class A : public Base { };
class B : public Base { };
class C : public Base { };

void	identify( Base *p );
void	identify( Base &p );
Base	*generate( void );

#endif
