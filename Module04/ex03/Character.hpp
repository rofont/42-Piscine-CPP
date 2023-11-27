/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:11:31 by romain            #+#    #+#             */
/*   Updated: 2023/11/26 22:10:56 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
	public:
		Character(void);
		Character(string name);
		Character(Character const &copy);
		~Character(void);

		Character &operator=(Character const &src);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		string _name;
		AMateria *_stock[4];

};


#endif