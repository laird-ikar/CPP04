/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:26 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/23 07:19:28 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <string>

class Cat
{
	private:

	public:
		Cat(void);
		Cat(Cat const &src);
		~Cat(void);

		Cat	&operator=(Cat const &src);
};

#endif
