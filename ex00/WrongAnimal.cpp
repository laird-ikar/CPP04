/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:43 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/23 07:19:44 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/***********************
*	Constructors & Destructor
***********************/

WrongAnimal::WrongAnimal(void)
{
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	*this = src;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	return ;
}

/***********************
*	Assignation Operators
***********************/

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const &src)
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
