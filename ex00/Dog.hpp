/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:21 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/23 07:19:22 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>

class Dog
{
	private:

	public:
		Dog(void);
		Dog(Dog const &src);
		~Dog(void);

		Dog	&operator=(Dog const &src);
};

#endif
