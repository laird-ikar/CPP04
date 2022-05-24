/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 07:42:00 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/24 12:55:57 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class AMateria;
class ICharacter;

class Cure : public AMateria
{
	private:

	protected:

	public:
		Cure(void);
		Cure(const Cure &src);
		Cure(const std::string type);
		virtual ~Cure(void);

		Cure		&operator=(const Cure &src);

		virtual AMateria	*clone(void) const;
		virtual void	use(ICharacter&);
};

#endif
