/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 08:23:35 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/23 08:24:02 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/***********************
*	Constructors & Destructor
***********************/

Brain::Brain(void)
{
	return ;
}

Brain::Brain(Brain const &src)
{
	*this = src;
	return ;
}

Brain::~Brain(void)
{
	return ;
}

/***********************
*	Assignation Operators
***********************/

Brain	&Brain::operator=(Brain const &src)
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
