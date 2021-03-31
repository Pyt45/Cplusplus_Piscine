/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:44:32 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/31 13:08:33 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int     main(void)
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
    catch(std::out_of_range & e) {
        std::cout << e.what() << std::endl;
    }
}
