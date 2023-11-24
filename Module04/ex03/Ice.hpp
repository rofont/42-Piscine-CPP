/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:05:43 by romain            #+#    #+#             */
/*   Updated: 2023/11/24 11:35:56 by rofontai         ###   ########.fr       */
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
		virtual~Ice(void);

		Ice &operator=(Ice const &src);

		const std::string &getType(void) const;
		AMateria* clone(void) const;
		void use(ICharacter& target);
};

#endif