/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:51:01 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/20 14:49:35 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

using std::string;

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal &copy);
		~WrongAnimal(void);

		WrongAnimal &operator=(WrongAnimal const &src);
		string getType(void) const;
		void makeSound(void) const;

	protected:
		string _typeWrong;
};

#endif