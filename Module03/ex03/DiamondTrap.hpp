/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:46:40 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/16 10:42:15 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
	public:
	DiamondTrap(void);
	DiamondTrap(string name);
	DiamondTrap(DiamondTrap &copy);
	~DiamondTrap(void);

	DiamondTrap &operator=(DiamondTrap const &src);

	void whoAmI(void);
	using ScavTrap::attack;
	using FragTrap::takeDamage;
	using ClapTrap::beRepaired;
	private:
	string _name;
};

#endif