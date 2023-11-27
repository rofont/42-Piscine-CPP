/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:48:05 by romain            #+#    #+#             */
/*   Updated: 2023/11/26 22:05:56 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class ICharacter;

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &copy);
		~Ice(void);

		Ice &operator=(Ice const &src);
		AMateria *clone(void) const;
		void use(ICharacter& target);
};

#endif