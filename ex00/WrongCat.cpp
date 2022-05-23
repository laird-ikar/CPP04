/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:46 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/23 07:19:47 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/***********************
*	Constructors & Destructor
***********************/

WrongCat::WrongCat(void)
{
	return ;
}

WrongCat::WrongCat(WrongCat const &src)
{
	*this = src;
	return ;
}

WrongCat::~WrongCat(void)
{
	return ;
}

/***********************
*	Assignation Operators
***********************/

WrongCat &	WrongCat::operator=(WrongCat const &src)
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
