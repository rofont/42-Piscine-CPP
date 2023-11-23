/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:59:14 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/23 12:02:52 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog &copy);
		virtual~Dog(void);

		Dog &operator=(Dog const &src);
		void makeSound(void) const;
		const string &getType(void) const;
		void setIdea(string const &idea, int const &i);
		const string &getIdea(int const &i) const;

	private:
		Brain *_DogBrain;
};

#endif