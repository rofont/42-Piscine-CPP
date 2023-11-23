/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 08:45:53 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/23 12:00:21 by rofontai         ###   ########.fr       */
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
		const string &getIdea(int const &i) const;
		void setIdea(string const &idea, int const &i);

	private:
		string _ideas[100];
};

#endif