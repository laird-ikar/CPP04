/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 08:07:35 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/24 08:07:38 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/***********************
*	Constructors & Destructor
***********************/

MateriaSource::MateriaSource(void)
{
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	return ;
}

/***********************
*	Assignation Operators
***********************/

MateriaSource	&MateriaSource::operator=(MateriaSource const &src)
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
