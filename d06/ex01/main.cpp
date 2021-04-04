/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 11:06:07 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/04 11:32:38 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>

struct Data {
	std::string *s1;
	int			n;
	std::string *s2;
};

void	*serialize(void)
{
	std::string randAlpha = 
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	struct Data	*r_data = new Data;
	r_data->s1 = new std::string("");
	r_data->s2 = new std::string("");
	for (int i = 0; i < 8; i++)
	{
		*r_data->s1 += randAlpha[rand() % randAlpha.size()];
	}
	r_data->n = ((rand() % 2 & 1) ? 1 : -1) * 2;
	for (int i = 0; i < 8; i++)
	{
		*r_data->s2 += randAlpha[rand() % randAlpha.size()];
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

	void	*raw = serialize();
	Data *data = deserialize(raw);

	std::cout << *data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << *data->s2 << std::endl;
	
	delete data->s1;
	delete data->s2;
	delete data;
	return 0;
}