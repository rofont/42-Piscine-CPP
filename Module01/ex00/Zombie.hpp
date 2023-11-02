/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:38:22 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/01 22:11:51 by romain           ###   ########.fr       */
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
	Zombie(string name);
	~Zombie(void);
	void	announce(void);

	private:

	string _name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif