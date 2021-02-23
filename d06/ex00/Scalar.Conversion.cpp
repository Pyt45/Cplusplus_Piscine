/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.Conversion.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 16:37:52 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/23 10:51:50 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.Conversion.hpp"

ScalarConversion::ScalarConversion( void )
{
    return ;
}

ScalarConversion::ScalarConversion( ScalarConversion const & src )
{
    *this = src;
    return ;
}

ScalarConversion & ScalarConversion::operator=( ScalarConversion const & src )
{
    static_cast<void>(src);
    return *this;
}

ScalarConversion::~ScalarConversion( void )
{
    return ;
}

char const * ScalarConversion::Impossible::what() const throw()
{
    return "impossible";
}

char const * ScalarConversion::NotDisplayable::what() const throw()
{
    return "Non displayable";
}

int     ScalarConversion::convertToInt(double num)
{
    if (std::isnan(num) || std::isinf(num))
        throw Impossible();
    else if (static_cast<double>(num) > std::numeric_limits<int>::max()
    || static_cast<double>(num) < std:: numeric_limits<int>::min())
        throw Impossible();
    return static_cast<int>(num);
}

char    ScalarConversion::convertToChar(double num)
{
    if (std::isnan(num) || std::isinf(num))
        throw Impossible();
    else if (std::isprint(num) == false)
        throw NotDisplayable();
    return static_cast<char>(num);
}

float   ScalarConversion::convertToFloat(double num)
{
    return static_cast<float>(num);
}

double  ScalarConversion::convertToDouble(double num)
{
    return static_cast<double>(num);
}
