/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 07:32:56 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/24 07:51:26 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_HPP

#include <iostream>
#include <string>

class AMateria
{
	private:

	protected:
		const std::string	type;

	public:
		AMateria(void);
		AMateria(const AMateria &src);
		AMateria(const std::string &type);
		virtual ~AMateria(void);

		AMateria			&operator=(AMateria const &src);

		const std::string	&getType();

		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);
};

#endif
