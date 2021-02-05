/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:36:41 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 16:36:42 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony *pony = new Pony("rocket", "ayoub", 1);
	std::cout << "Rocker is now alive and allocated on the stack" << std::endl;
	std::cout << "when calling delete pony Destructor been applyed" << std::endl;
	delete (pony);
}

void	ponyOnTheStack()
{
	Pony pony("rocky", "duhh", 2);
	std::cout << "Destructor been called automaticly" << std::endl;
}

int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
}