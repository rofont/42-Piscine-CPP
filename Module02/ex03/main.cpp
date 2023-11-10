/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:19:03 by romain            #+#    #+#             */
/*   Updated: 2023/11/10 14:01:13 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main() {
  Point a(0.0f, 7.0f);
  Point b(10.0f, 2.0f);
  Point c(10.0f, 10.0f);

  Point v(6.0f, 8.0f);
  Point w(6.0f, 12.0f);
  Point x(10.0f, 9.0f);
  Point y(9.9f, 7.0f);

  std::cout << "Test 1 Dans le triangle:     True    "
            << "BSP: " << bsp(a, b, c, v) << std::endl;
  std::cout << "Test 2 Dehors triangle:    False    "
            << "BSP: " << bsp(a, b, c, w) << std::endl;
  std::cout << "Test 3 sur un arrete:        False    "
            << "BSP: " << bsp(a, b, c, x) << std::endl;
  std::cout << "Test 4 sur un point:        False    "
            << "BSP: " << bsp(a, b, c, b) << std::endl;
  std::cout << "Test 5 proche arrete:        True    "
            << "BSP: " << bsp(a, b, c, y) << std::endl;

	return 0;
}