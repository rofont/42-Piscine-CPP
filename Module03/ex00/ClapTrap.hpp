/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:00:18 by romain            #+#    #+#             */
/*   Updated: 2023/11/15 21:46:13 by romain           ###   ########.fr       */
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
	void attack(string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired( unsigned int amount);

	string const &getName(void) const;
	int const &getHitPoints(void) const;
	int const &getEnergyPoints(void) const;
	int const &getAttackDamage(void) const;

	private:
	string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;

};

#endif