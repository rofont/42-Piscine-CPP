/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:59:53 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/03 11:16:35 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
	HumanB(void);
	HumanB(string name);
	~HumanB(void);

	void	setWeapon(Weapon &weapon);
	void	attack(void) const;

	private:
	Weapon	*_weapon;
	string	_name;
};

#endif
