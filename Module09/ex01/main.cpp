/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 21:31:05 by romain            #+#    #+#             */
/*   Updated: 2024/01/26 21:54:26 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main( int ac, char **av )
{
	if (ac != 2) {
		std::cerr <<RED "You don't have enough parameters" WHT<< std::endl;
		return 1;
	}
	RPN operation( av[1] );
	operation.printInput();
	return 0;
}