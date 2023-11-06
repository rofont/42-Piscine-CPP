/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:44:17 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/06 14:42:25 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

using std::string;

class Harl
{
	public:
	Harl(void);
	~Harl(void);

	void complain (string level);

	private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};


#endif