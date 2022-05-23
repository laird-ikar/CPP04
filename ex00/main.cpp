/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:12 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/23 07:24:06 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	const Animal*		meta = new Animal();
	const Animal*		j = new Dog();
	const Animal*		i = new Cat();
	const WrongAnimal*	w_meta = new WrongAnimal();
	const WrongAnimal*	w_i = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << w_i->getType() << " " << std::endl;
	w_i->makeSound();
	w_meta->makeSound();

	delete meta;
	delete j;
	delete i;
	delete w_meta;
	delete w_i;
	return 0;
}
