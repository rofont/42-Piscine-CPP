/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:05:40 by romain            #+#    #+#             */
/*   Updated: 2023/11/23 18:56:53 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP


# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure &copy);
		~Cure(void);

		Cure &operator=(Cure const &src);

		const std::string &getType(void) const;
		AMateria* clone(void) const;
		void use(ICharacter& target);
};

#endif