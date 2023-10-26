/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:44:26 by rofontai          #+#    #+#             */
/*   Updated: 2023/10/26 19:01:38 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;
class Contact
{
	public:

	Contact();
	~Contact();

	private:

	string _first_name;
	string _last_name;
	string _nickname;
	string _phone_number;
	string _darkest_secret;
};

#endif