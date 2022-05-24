/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:35 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/23 17:30:54 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_Animal.hpp"

/***********************
*	Constructors & Destructor
***********************/

_Animal::_Animal(void)
{
	this->type = "Ignotum animal novis";
	std::cout << "An animal is born!" << std::endl;
	return ;
}

_Animal::_Animal(_Animal const &src)
{
	*this = src;
	std::cout << "An animal is born!" << std::endl;
	return ;
}

_Animal::~_Animal(void)
{
	std::cout << "An animal is going to the farm..." << std::endl;
	return ;
}

/***********************
*	Assignation Operators
***********************/

_Animal	&_Animal::operator=(_Animal const &src)
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

std::string	_Animal::getType(void) const
{
	return (this->type);
}

/***********************
*	Methods
***********************/

void		_Animal::makeSound(void) const
{
	std::cout << "*strange and unfamiliar sounds*" << std::endl;
	return ;
}
