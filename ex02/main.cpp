/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:12 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/24 07:29:54 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <time.h>

#ifndef NB_ANIMALS
#define NB_ANIMALS 8
#endif

int	main(void)
{
	srand (time(0));
	const AAnimal	*zoo[NB_ANIMALS];
	const Cat		*mabel = new Cat();
	Cat				*dipper = new Cat();
	int				i;

	i = 0;
	std::cout << "CREATING ZOO" << std::endl;
	while (i < NB_ANIMALS)
	{
		if (i % 2)
			zoo[i] = new Cat();
		else
			zoo[i] = new Dog();
			i++;
	}
	std::cout << "COPY" << std::endl;
	*(dipper) = *(mabel);
	std::cout << mabel->getBrain() << " =? " << dipper->getBrain() << std::endl;
	mabel->getBrain()->printIdea(0);
	std::cout << " =? ";
	dipper->getBrain()->printIdea(0);
	std::cout << std::endl;
	std::cout << "DELETE" << std::endl;
	delete mabel;
	delete dipper;
	i = 0;
	while (i < NB_ANIMALS)
	{
		delete zoo[i];
		i++;
	}
	return 0;
}
