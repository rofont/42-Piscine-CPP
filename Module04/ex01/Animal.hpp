/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:43:24 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/22 21:20:50 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

// COLORS----------------------------------------------------------------------
# define BCK "\x1B[30m"
# define RED "\x1B[31m"
# define GRE "\x1B[32m"
# define YEL "\x1B[33m"
# define BLE "\x1B[34m"
# define MAG "\x1B[35m"
# define CYA "\x1B[36m"
# define WHT "\x1B[37m"
//-----------------------------------------------------------------------------

using std::string;

class Animal
{
	public:
		Animal(void);
		Animal(Animal &copy);
		virtual~Animal(void);

		Animal &operator=(Animal const &src);

		virtual string getType(void) const;
		virtual void makeSound(void) const;

		 virtual void setIdea(string const &idea, int const &i) = 0;
		 virtual string getIdea(int const &i) const = 0;

	protected:
		string _type;
};

#endif