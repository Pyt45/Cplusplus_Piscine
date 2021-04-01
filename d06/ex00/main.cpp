/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 16:40:40 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/01 13:44:15 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.Conversion.hpp"

void	printChar(ScalarConversion & Scalar, double value)
{
	try {
		std::cout << "char: ";
		std::cout << "'" << Scalar.convertToChar(value) << "'" << std::endl;
	}
	catch(std::exception & e) {
		std::cout << "\b";
		std::cout << e.what() << std::endl;
	}
}

void	printInt(ScalarConversion & Scalar, double value)
{
	try {
		std::cout << "int: " << Scalar.convertToInt(value) << std::endl;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

void	printFloat(int precision,ScalarConversion & Scalar, double value)
{
	try {
		std::cout << "float: ";
		std::cout << std::setprecision(precision) << std::fixed
		<< Scalar.convertToFloat(value) << "f" << std::endl;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

void	printDouble(int precision, ScalarConversion & Scalar, double value)
{
	try {
		std::cout << "double: ";
		std::cout << std::setprecision(precision) << std::fixed
		<< Scalar.convertToDouble(value) << std::endl;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

int		getPrecision(std::string str)
{
	int		afterDot = 0;
	int		beforeDot = 0;

	while (str[beforeDot] && str[beforeDot] != '.')
		beforeDot++;
	afterDot = beforeDot + 1;
	while(str[afterDot] && isdigit(str[afterDot]))
		afterDot++;
	afterDot -= beforeDot;
	return ((str.length() == static_cast<size_t>(beforeDot) || afterDot == 1) ? 1 : afterDot - 1);
}

int 	check_arg(std::string const &str)
{
	double val = atof(str.c_str());
	if (str.length() == 1 && std::isprint(str[0])
	&& (str[0] > '9' || str[0] < '0'))
		return (1);
	else if (str.length() > 1 && !atof(str.c_str()))
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	double value = 0.0;
	ScalarConversion Scalar;

	if (argc == 2)
	{
		std::string arg = argv[1];
		if (arg.empty())
			std::cout << "argument must not be empty" << std::endl;
		else if (check_arg(argv[1]))
		{
			try {
				if (arg.length() > 1)
					throw ScalarConversion::Impossible();
				else
				{
					double val = static_cast<double>(int(argv[1][0]));
					printChar(Scalar, val);
					printInt(Scalar, val);
					printFloat(1, Scalar, val);
					printDouble(1, Scalar, val);
				}
			} catch(std::exception & e) {
				std::cout << e.what() << std::endl;
			}
		}
		else
		{
			value = atof(argv[1]);
			int precision = getPrecision(argv[1]);
			printChar(Scalar, value);
			printInt(Scalar, value);
			printFloat(precision, Scalar, value);
			printDouble(precision, Scalar, value);
		}
	}
	else
		std::cout << "add another argument to run this program 😜" << std::endl;
	return 0;
}