/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 08:23:40 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/23 08:23:51 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>

class Brain
{
	private:

	protected:

	public:
		Brain(void);
		Brain(Brain const &src);
		~Brain(void);

		Brain	&operator=(Brain const &src);
};

#endif
