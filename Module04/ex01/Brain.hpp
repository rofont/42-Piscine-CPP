/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 08:45:53 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/21 10:31:34 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

using std::string;

class Brain
{
	public:
		Brain(void);
		Brain(Brain &copy);
		~Brain(void);

		Brain &operator=(Brain const &src);
		void printBrain(void);

	private:
		string _ideas[100];
};

#endif