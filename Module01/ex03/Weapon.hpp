/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:59:09 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/02 12:54:17 by rofontai         ###   ########.fr       */
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
	~Weapon(void);
	const string	&getType(void) const;
	void			setType(string type);

	private:

	string	_type;
};


#endif