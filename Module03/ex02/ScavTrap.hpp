/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:18:14 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/14 15:31:19 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap(void);
	ScavTrap(string name);
	ScavTrap(ScavTrap &copy);
	~ScavTrap(void);

	ScavTrap &operator=(ScavTrap const &src);

	void guardGate(void);

	private:
	bool _guardGate;
};

#endif