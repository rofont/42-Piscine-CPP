/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:00:18 by romain            #+#    #+#             */
/*   Updated: 2023/11/14 14:10:26 by rofontai         ###   ########.fr       */
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

	ClapTrap operator=(ClapTrap const &src);
	void attack(string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired( unsigned int amount);

	void setName(string name);
	void setHitPoints(int hits);
	void setEnergyPoints(int energy);
	void setAttackDamage(int damage);

	string getName(void) const;
	int getHitPoints(void) const;
	int getEnergyPoints(void) const;
	int getAttackDamage(void) const;
	void getStatus(void) const;

	protected:
	string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;

};

#endif