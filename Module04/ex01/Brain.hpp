/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 08:45:53 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/22 21:08:23 by romain           ###   ########.fr       */
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
		string getIdea(int const &i) const;
		void setIdea(string const &idea, int const &i);

	private:
		string _ideas[100];
};

#endif