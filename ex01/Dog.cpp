/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:15 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/23 08:35:51 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/***********************
*	Constructors & Destructor
***********************/

Dog::Dog(void):Animal()
{
	this->brain = new Brain();
	this->type = "Dog";
	std::cout << "A dog is born!" << std::endl;
	return ;
}

Dog::Dog(Dog const &src):Animal()
{
	*this = src;
	std::cout << "A dog is born!" << std::endl;
	return ;
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "A dog is going to the farm..." << std::endl;
	return ;
}

/***********************
*	Assignation Operators
***********************/

Dog	&Dog::operator=(Dog const &src)
{
	delete this->brain;
	this->brain = new Brain(*src.brain);
	this->Animal::operator=(src);
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

void		Dog::makeSound(void) const
{
	std::cout << "Waf bark waf" << std::endl;
	return ;
}
