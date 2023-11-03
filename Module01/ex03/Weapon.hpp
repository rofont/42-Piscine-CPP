/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:59:09 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/03 11:15:58 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

using std::string;

class Weapon
{
	public:
	Weapon(void);
	Weapon(string type);
	~Weapon(void);

	const string	&getType(void) const;
	void			setType(string type);

	private:
	string _type;
};

#endif