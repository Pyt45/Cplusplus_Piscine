/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:45:56 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/24 11:46:37 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

double     mul(int a)
{
    a *= 2;
    std::cout << "a * 2 = " << static_cast<double>(a) << std::endl;
    return static_cast<double>(a);
}

int     mul(double i)
{
    i *= 2;
    std::cout << "i * 2 = " << static_cast<int>(i) << std::endl;
    return static_cast<int>(i);
}

int main()
{
    double arr[6] = {1, 2, 3, 4, 5, 6};
    int     arr1[6] = {1, 2, 3, 4, 5, 6};
    ::iter(arr, 6, static_cast<int (*)(double)>(mul));
    std::cout << "===================================" << std::endl;
    ::iter(arr1, 6, static_cast<double (*)(int)>(mul));
}
