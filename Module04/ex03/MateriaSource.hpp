/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:42:23 by romain            #+#    #+#             */
/*   Updated: 2023/11/26 22:09:37 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"


class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &copy);
		~MateriaSource(void);

		MateriaSource &operator=(MateriaSource const &src);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria *_tank[4];
};

#endif