/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:38:22 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/02 10:03:18 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

using std::string;
using std::cout;
using std::endl;
class Zombie
{
	public:

	Zombie(void);
	~Zombie(void);

	void	setName(string name);
	void	announce(void);

	private:

	string _name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif