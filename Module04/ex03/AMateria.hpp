/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:34:27 by romain            #+#    #+#             */
/*   Updated: 2023/11/26 22:12:43 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

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

# include <iostream>
# include <string>
# include "ICharacter.hpp"

using std::string;

class AMateria
{
	protected:
		string _type;

	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const &copy);
		virtual~AMateria(void);

		AMateria &operator=(AMateria const &src);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif