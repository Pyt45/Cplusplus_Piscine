/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 16:40:40 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/06 13:54:49 by aaqlzim          ###   ########.fr       */
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
	// if (str == "inf" || str == "inff"
	// || str == "+inf" || str == "+inff")
	// 	return (0);
	// std::string s = str;
	// std::string s1;
	// std::string s2;
	// std::string s3 = str;
	// std::string s4 = str;
	// std::stringstream ss;
	// size_t i = s.find('f');
	// size_t j = s.find('.');
	// if (i != std::string::npos)
	// {
	// 	s1 = s.substr(0, i);
	// 	s2 = s.erase(0, i + 1);
	// 	std::string s5 = str.substr(i, str.length());
	// 	// std::cout << "s1 = " << s1 << std::endl;
	// 	// std::cout << "s5 = " << s1 << std::endl;
	// 	double val = atof(s5.c_str());
	// 	ss << val;
	// 	// std::cout << val << std::endl;
	// 	if (s5.length() > 1)
	// 	{
	// 		for (size_t i = 0; i < s5.length(); i++) {
	// 				if (s5[i] > '9' || s5[i] < '0')
	// 					return (1);
	// 		}
	// 	}
	// 	else if (s5.length() == 1)
	// 	{
	// 		if (s1[s1.length() - 1] >= '0' && s1[s1.length() - 1] <= '9' && s5 == "f")
	// 		{
	// 			// std::cout << s1[s1.length() - 1] << std::endl;
	// 			return (0);
	// 		}
	// 		else
	// 			return (1);
	// 	}
	// 	else if (s1.length() == 0)
	// 		return (1);
	// 	else if (s2.find('f') != std::string::npos)
	// 		return (1);
	// 	return (0);
	// }
	// else if (j != std::string::npos)
	// {
	// 	std::string spt = s3.substr(0, j + 1);
	// 	std::string sptp = s3.substr(j + 1, str.length());
	// 	if (sptp.find('.') != std::string::npos)
	// 		return (1);
	// 	else {
	// 		for (size_t i = 0; i < sptp.length(); i++) {
	// 			if (sptp[i] > '9' || sptp[i] < '0')
	// 				return (1);
	// 		}
	// 	}
	// 	return (0);
	// }
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
		std::cout << "must be only one argument to run this program 😜" << std::endl;
	return 0;
}