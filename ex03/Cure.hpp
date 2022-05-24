/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 07:42:00 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/24 08:03:06 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_HPP

#include <iostream>
#include <string>

class Cure
{
	private:

	protected:

	public:
		Cure(void);
		Cure(const Cure &src);
		Cure(const std::string type);
		~Cure(void);

		Cure		&operator=(const Cure &src);
};

#endif
