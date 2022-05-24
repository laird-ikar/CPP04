/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:12 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/23 12:04:23 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int	main(void)
{
	std::cout << "Good Cat" << std::endl << std::endl;
	{
		const Animal	*meta = new Animal();
		const Animal	*j = new Dog();
		const Animal	*i = new Cat();

		std::cout << meta->getType() << " says:" << std::endl;
		meta->makeSound();
		std::cout << j->getType() << " says:" << std::endl;
		j->makeSound();
		std::cout << i->getType() << " says:" << std::endl;
		i->makeSound();
		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl << std::endl << "Wrong Cat" << std::endl
		<< std::endl;
	{
		const Animal*		meta = new Animal();
		const Animal*		j = new Dog();
		const WrongAnimal*	i = new WrongCat();

		std::cout << meta->getType() << " says:" << std::endl;
		meta->makeSound();
		std::cout << j->getType() << " says:" << std::endl;
		j->makeSound();
		std::cout << i->getType() << " says:" << std::endl;
		i->makeSound();
		delete meta;
		delete j;
		delete i;
	}
	return 0;
}
