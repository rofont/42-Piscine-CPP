/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:45:21 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/15 11:00:45 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	FragTrap(void);
	FragTrap(string name);
	FragTrap(FragTrap &copy);
	~FragTrap(void);

	FragTrap &operator=(FragTrap const &src);

	void highFivesGuys(void);
};


#endif