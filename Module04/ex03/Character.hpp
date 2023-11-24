/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:08:59 by romain            #+#    #+#             */
/*   Updated: 2023/11/23 21:37:28 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP


# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

using std::string;

class Character : public ICharacter
{
	public:
		Character(string const &name);
		Character(Character &copy);
		~Character(void);

		Character &operator=(Character const &src);

		string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		Character(void);
		string _name;
		AMateria *_stock[4];
		uint _idx;
};

#endif