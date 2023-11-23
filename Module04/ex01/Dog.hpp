/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:59:14 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/22 21:21:43 by romain           ###   ########.fr       */
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
		virtual void makeSound(void) const;
		virtual string getType(void) const;
		void setIdea(string const &idea, int const &i);
		string getIdea(int const &i) const;

	private:
		Brain *_DogBrain;
};

#endif