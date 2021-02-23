/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 11:06:07 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/23 11:31:03 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>

struct Data {
	std::string s1;
	int			n;
	std::string s2;
};

struct Random {
	std::string data_r1;
	int			rnum;
	std::string	data_r2;
};

void	*serialize(void)
{
	std::string alpha = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	struct Random	*mydata = new Random;
	srand(clock());
	mydata->rnum = rand() % 2;
	mydata->data_r1 = "";
	mydata->data_r2 = "";
	for (int i = 1; i < 9; i++)
	{
		mydata->data_r1 += alpha[rand() % i + 20];
		mydata->data_r2 += alpha[rand() % i + 20];
	}
	std::cout << mydata->rnum << std::endl;
	std::cout << mydata->data_r1 << std::endl;
	std::cout << mydata->data_r2 << std::endl;
	return static_cast<void*>(mydata);
}

int		main(void)
{
	std::cout << serialize() << std::endl;
	return 0;
}