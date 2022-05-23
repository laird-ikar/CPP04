/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:49 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/23 07:19:50 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal
{
	private:

	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src);
		~WrongAnimal(void);

		WrongAnimal	&operator=(WrongAnimal const &src);
};

#endif
