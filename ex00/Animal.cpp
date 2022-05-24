/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:35 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/23 12:01:22 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/***********************
*	Constructors & Destructor
***********************/

Animal::Animal(void)
{
	this->type = "Ignotum animal novis";
	std::cout << "An animal is born!" << std::endl;
	return ;
}

Animal::Animal(Animal const &src)
{
	*this = src;
	std::cout << "An animal is born!" << std::endl;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "An animal is going to the farm..." << std::endl;
	return ;
}

/***********************
*	Assignation Operators
***********************/

Animal &	Animal::operator=(Animal const &src)
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

std::string	Animal::getType(void) const
{
	return (this->type);
}

/***********************
*	Methods
***********************/

void		Animal::makeSound(void) const
{
	std::cout << "*strange and unfamiliar sound*" << std::endl;
	return ;
}
