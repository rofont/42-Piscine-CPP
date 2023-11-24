/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:05:43 by romain            #+#    #+#             */
/*   Updated: 2023/11/23 18:53:21 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP


# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice &copy);
		~Ice(void);

		Ice &operator=(Ice const &src);

		const std::string &getType(void) const;
		AMateria* clone(void) const;
		void use(ICharacter& target);
};

#endif