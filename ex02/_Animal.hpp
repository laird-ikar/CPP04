/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _Animal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:39 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/23 17:35:16 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class _Animal
{
	private:

	protected:
		std::string	type;

	public:
		_Animal(void);
		_Animal(_Animal const &src);
		virtual	~_Animal(void);

		virtual _Animal	&operator=(_Animal const &src);

		std::string		getType(void) const;

		virtual void	makeSound(void) const = 0;
};

#endif
