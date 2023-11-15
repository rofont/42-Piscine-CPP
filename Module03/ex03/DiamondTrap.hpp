/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:46:40 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/15 13:04:29 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
	DiamondTrap(void);
	DiamondTrap(string name);
	DiamondTrap(DiamondTrap &copy);
	~DiamondTrap(void);

	DiamondTrap &operator=(DiamondTrap const &src);

	void whoIam(void);

	private:
	string _name;
};

#endif