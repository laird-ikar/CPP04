/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:35 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/23 07:19:36 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/***********************
*	Constructors & Destructor
***********************/

Animal::Animal(void)
{
	return ;
}

Animal::Animal(Animal const &src)
{
	*this = src;
	return ;
}

Animal::~Animal(void)
{
	return ;
}

/***********************
*	Assignation Operators
***********************/

Animal &	Animal::operator=(Animal const &src)
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
