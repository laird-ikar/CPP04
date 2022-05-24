/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 08:07:19 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/24 08:07:21 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_HPP

#include <iostream>
#include <string>

class MateriaSource
{
	private:

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &src);
		~MateriaSource(void);

		MateriaSource	&operator=(MateriaSource const &src);
};

#endif
