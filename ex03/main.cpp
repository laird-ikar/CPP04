/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 07:49:31 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/24 16:48:31 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	// ICharacter	*cloud = new Character("Cloud");
	// AMateria	*m1 = new Cure();
	// AMateria	*m2 = new Cure();
	// AMateria	*m3 = new Ice();
	// AMateria	*m4 = new Cure();
	// AMateria	*m5 = new Ice();
	//
	// cloud->equip(m1);
	// cloud->equip(m2);
	// cloud->equip(m3);
	// cloud->equip(m4);
	// cloud->equip(m5);
	// cloud->unequip(0);
	//
	// delete cloud;
	// delete m1;
	// delete m5;
	// return 0;
}
