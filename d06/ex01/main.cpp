/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 11:06:07 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/23 16:02:28 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>

struct Data {
	std::string s1;
	int			n;
	std::string s2;
};

void	*serialize(void)
{
	std::string randAlpha = 
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	struct Data	*r_data = new Data;
	r_data->s1 = "";
	r_data->s2 = "";
	for (int i = 0; i < 8; i++)
	{
		r_data->s1 += randAlpha[rand() % randAlpha.size()];
	}
	r_data->n = ((rand() % 2 & 1) ? 1 : -1) * 2;
	for (int i = 0; i < 8; i++)
	{
		r_data->s2 += randAlpha[rand() % randAlpha.size()];
	}
	return static_cast<void*>(r_data);
}

Data	*deserialize(void * raw)
{
	return reinterpret_cast<Data*>(raw);
}

int		main(void)
{
	srand(clock());
	Data *data = deserialize(serialize());
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
	return 0;
}