/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:44:32 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/28 14:08:31 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int     main(void)
{
    {
        Span sp1 = Span(6);
        try {
            sp1.addNumber(5);
            sp1.addNumber(3);
            sp1.addNumber(17);
            sp1.addNumber(9);
            sp1.addNumber(11);
            sp1.addNumber(-2345);
            std::cout << sp1.shortestSpan() << std::endl;
            std::cout << sp1.longestSpan() << std::endl;
            sp1.addNumber(4);
        }
        catch(std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "\n============================\n\n";
    {
        Span sp = Span(10000);
        std::vector<int> v(10000);
        srand(clock());
        for (int i = 0; i < 10000; i++)
            v.at(i) = rand() % 10000;
        try {
            sp.addNumber(v.begin(), v.end());
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
			sp.addNumber(5);
        } catch(std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    }
}
