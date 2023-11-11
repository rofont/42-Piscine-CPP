/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:23:16 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/10 17:29:31 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

using std::cout;
using std::endl;

Fixed Product(const Point& a, const Point& b, const Point& c)
{
    return ((b.getPoint_x() - a.getPoint_x()) * (c.getPoint_y() - a.getPoint_y())) - ((b.getPoint_y() - a.getPoint_y()) * (c.getPoint_x() - a.getPoint_x()));
}

bool	bsp(Point const &a, Point const &b, Point const &c, Point const &point)
{
	Fixed cross1 = Product(a, b, point);
    Fixed cross2 = Product(b, c, point);
    Fixed cross3 = Product(c, a, point);

	if ((cross1 > Fixed(0) && cross2 > Fixed(0) && cross3 > Fixed(0)) || (cross1 < Fixed(0) && cross2 < Fixed(0) && cross3 < Fixed(0)))
		return true;
	return false;
}
