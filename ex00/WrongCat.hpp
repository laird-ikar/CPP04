/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:52 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/23 07:19:53 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H

#include <iostream>
#include <string>

class WrongCat
{
	private:

	public:
		WrongCat(void);
		WrongCat(WrongCat const &src);
		~WrongCat(void);

		WrongCat	&operator=(WrongCat const &src);
};

#endif
