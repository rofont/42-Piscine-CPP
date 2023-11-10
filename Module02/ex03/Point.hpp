/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:05:55 by romain            #+#    #+#             */
/*   Updated: 2023/11/09 20:52:45 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
	Point(void);
	Point(Point const &copy);
	Point(float const x, float const y);
	~Point(void);

	Point const &operator=(Point const &src);

	void setPoint_x(Fixed const &x);
	void setPoint_y(Fixed const &y);
	Fixed const getPoint_x(void) const;
	Fixed const getPoint_y(void) const;

	private:
	Fixed const &_x;
	Fixed const &_y;
};

std::ostream &operator<<(std::ostream &out, Point const &rhs);

#endif