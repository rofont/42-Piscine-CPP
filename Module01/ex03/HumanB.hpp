/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:59:53 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/02 11:39:24 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:
	HumanB(void);
	HumanB(Weapon weapon);
	~HumanB(void);

	void	attack(void);

	private:
	Weapon	_weapon;
	string	_name;
};

#endif