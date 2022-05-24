/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 08:00:55 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/24 08:00:57 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/***********************
*	Constructors & Destructor
***********************/

Character::Character(void)
{
	return ;
}

Character::Character(Character const &src)
{
	*this = src;
	return ;
}

Character::~Character(void)
{
	return ;
}

/***********************
*	Assignation Operators
***********************/

Character	&Character::operator=(Character const &src)
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
