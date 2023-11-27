/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:03:31 by romain            #+#    #+#             */
/*   Updated: 2023/11/26 22:05:39 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class ICharacter;

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &copy);
		~Cure(void);

		Cure &operator=(Cure const &src);
		AMateria *clone(void) const;
		void use(ICharacter& target);
};

#endif