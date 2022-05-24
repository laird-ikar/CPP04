/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 08:02:34 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/24 08:09:57 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_HPP

#include <iostream>
#include <string>

class Character
{
	private:

	public:
		Character(void);
		Character(Character const &src);
		~Character(void);

		Character	&operator=(Character const &src);
};

#endif
