/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 08:46:05 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/22 21:08:33 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

using std::cout;
using std::endl;

Brain::Brain(void)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = "ID_" + std::to_string(i+1);
	cout << "BRAIN Default constructor" << endl;
}

Brain::Brain(Brain &copy)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
	cout << "BRAIN Copy constructor" << endl;
}

Brain::~Brain(void)
{
	cout << "BRAIN Default destructor" << endl;
}

Brain &Brain::operator=(Brain const &src)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = src._ideas[i];
	cout << "BRAIN Assignation operator" << endl;
	return *this;
}

void Brain::printBrain(void)
{
	for (int i = 0; i < 100; i++)
		cout << "ID " << i+1 << ": " << _ideas[i] << endl;
}

string Brain::getIdea(int const &i) const
{
	return _ideas[i];
}

void Brain::setIdea(string const &idea, int const &i)
{
	_ideas[i] = idea;
}