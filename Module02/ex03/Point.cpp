/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:06:05 by romain            #+#    #+#             */
/*   Updated: 2023/11/09 20:59:45 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

using std::cout;
using std::endl;

Point::Point(void) : _x(0), _y(0)
{
	cout << "Default Constructor called" << endl;
}

Point::Point(Point const &copy)
{
	*this = copy;
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
}

Point::~Point(void)
{
}

Point const &Point::operator=(Point const &src)
{
	setPoint_x(src._x);
	setPoint_y(src._y);
	return *this;
}

void Point::setPoint_x(Fixed const &x)
{
	(Fixed)_x = x;
}

void Point::setPoint_y(Fixed const &y)
{
	(Fixed)_y = y;
}

Fixed const Point::getPoint_x(void) const
{
	return _x;
}

Fixed const Point::getPoint_y(void) const
{
	return _y;
}

std::ostream &operator<<(std::ostream &out, Point const &rhs)
{
	out << rhs.getPoint_x() << " , " << rhs.getPoint_y();
	return out;
}