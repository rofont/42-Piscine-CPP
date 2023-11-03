/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:00:14 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/03 11:08:37 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	public:
	HumanA(string name, Weapon &weapon);
	~HumanA(void);

	void	attack(void) const;

	private:
	Weapon	&_weapon;
	string	_name;
};

#endif