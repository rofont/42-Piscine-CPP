/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:13:24 by romain            #+#    #+#             */
/*   Updated: 2024/01/08 21:14:40 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <iomanip>
# include <string>

# define CHAR "char: "
# define INT "int: "
# define FLOAT "float: "
# define DOUBLE "double: "
# define IMPOSSIBLE "impossible"
# define NO_DISPLAY "Non displayable"

using std::string;

// PRINT MSG
void	f_printChar(string &target);
void	f_printInt(string &target);
void	f_printFloat(string &target);
void	f_printDouble(string &target);
void	f_printScientist(string &target);
void	f_printImpossible(void);

//CHECK TARGET
bool	f_isChar(string &target);
bool	f_isInt(string &target);
bool	f_isFloat(string &target);
bool	f_isDouble(string &target);
bool	f_isScientist(string &target);



#endif