/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:37:48 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 16:37:49 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int		main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string* pstr = &str;
	std::string& rstr = str;

	std::cout << "\033[0;32mDisplay By Pointer: " << *pstr << "\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;31mDisplay By Reference: " << rstr << "\033[0m" << std::endl;
}