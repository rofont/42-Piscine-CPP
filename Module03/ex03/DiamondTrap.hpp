/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:46:40 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/15 22:33:43 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ClapTrap, public ScavTrap, public FragTrap
{
	public:
	DiamondTrap(void);
	DiamondTrap(string name);
	DiamondTrap(DiamondTrap &copy);
	~DiamondTrap(void);

	DiamondTrap &operator=(DiamondTrap const &src);

	void whoIam(void);
	using ScavTrap::attack;


	private:
	string _name;
};

#endif