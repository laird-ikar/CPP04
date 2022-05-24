/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:39 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/24 07:30:03 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
	private:

	protected:
		std::string	type;

	public:
		AAnimal(void);
		AAnimal(AAnimal const &src);
		virtual	~AAnimal(void);

		virtual AAnimal	&operator=(AAnimal const &src);

		std::string		getType(void) const;

		virtual void	makeSound(void) const = 0;
};

#endif
