/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:39 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/23 09:03:50 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	private:

	protected:
		std::string	type;

	public:
		Animal(void);
		Animal(Animal const &src);
		virtual	~Animal(void);

		virtual Animal	&operator=(Animal const &src);

		std::string		getType(void) const;

		virtual void	makeSound(void) const;
};

#endif
