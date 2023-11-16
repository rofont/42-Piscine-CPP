/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:00:18 by romain            #+#    #+#             */
/*   Updated: 2023/11/16 10:41:31 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

using std::string;


class ClapTrap
{
	public:
	ClapTrap(void);
	ClapTrap(string name);
	ClapTrap(ClapTrap &copy);
	~ClapTrap(void);

	ClapTrap &operator=(ClapTrap const &src);
	virtual void attack(string const &target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired( unsigned int amount);

	string const &getName(void) const;
	int const &getHitPoints(void) const;
	int const &getEnergyPoints(void) const;
	int const &getAttackDamage(void) const;

	protected:
	static string _name;
	static int _hitPoints;
	static int _energyPoints;
	static int _attackDamage;

};

#endif