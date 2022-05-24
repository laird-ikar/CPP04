/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 07:32:59 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/24 08:01:57 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/***********************
*	Constructors & Destructor
***********************/

AMateria::AMateria(void)
{
	return ;
}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
	return ;
}

AMateria::~AMateria(void)
{
	return ;
}

/***********************
*	Assignation Operators
***********************/

AMateria	&AMateria::operator=(AMateria const &src)
{
	return (*this);
}

/***********************
*	Boolean Operators
***********************/

/***********************
*	Arithmetic Operators
***********************/

/***********************
*	Stream Operators
***********************/

/***********************
*	Getter & Setters
***********************/

/***********************
*	Methods
***********************/
