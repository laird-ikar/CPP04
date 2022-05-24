/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 07:32:59 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/24 15:05:57 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/***********************
*	Constructors & Destructor
***********************/

AMateria::AMateria(void)
{
	this->type = "";
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
	this->type = src.type;
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

const std::string	&AMateria::getType()
{
	return this->type;
}

/***********************
*	Methods
***********************/
