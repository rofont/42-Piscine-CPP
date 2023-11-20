/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:08:36 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/20 11:58:06 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat &copy);
		virtual~Cat(void);

		Cat &operator=(Cat const &src);

		virtual void makeSound(void) const;
		virtual string getType(void) const;
};

#endif