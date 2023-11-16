/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:45:21 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/16 10:41:46 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
	FragTrap(void);
	FragTrap(string name);
	FragTrap(FragTrap &copy);
	~FragTrap(void);

	FragTrap &operator=(FragTrap const &src);

	void highFivesGuys(void);
	int const &getFragHitPoints(void) const;
	int const &getFragAttackDamage(void) const;

	private:
	static int defaultHp;
	static int defaultAd;
};


#endif