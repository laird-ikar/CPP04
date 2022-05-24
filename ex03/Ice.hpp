/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 07:41:30 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/24 08:03:11 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_HPP

#include <iostream>
#include <string>

class Ice
{
	private:

	protected:

	public:
		Ice(void);
		Ice(const Ice &src);
		Ice(const std::string type);
		~Ice(void);

		Ice			&operator=(const Ice &src);
};

#endif
