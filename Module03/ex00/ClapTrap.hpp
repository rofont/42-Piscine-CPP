/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:00:18 by romain            #+#    #+#             */
/*   Updated: 2023/11/13 16:04:24 by romain           ###   ########.fr       */
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
	void takeDomage(unsigned int amount);
	void beRepaired( unsigned int amount);

	void setName(string name);
	void setHitPoints(int hits);
	void setEnergyPoints(int energy);
	void setAttackDamage(int damage);

	string getName(void) const;
	int getHitPoints(void) const;
	int getEnergyPoints(void) const;
	int getAttackDamage(void) const;

	private:
	string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;

};

#endif