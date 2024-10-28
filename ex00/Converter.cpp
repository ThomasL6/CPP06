/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <thlefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:46:05 by thlefebv          #+#    #+#             */
/*   Updated: 2024/10/28 15:12:42 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

static void charConverter(std::string param)
{
	std::cout << "char: " << param[0] << std::endl;
	std::cout << "int: " << static_cast <int>(param[0]) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(param[0]) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(param[0]) << std::endl;
}

static void intConvert(std::string param)
{
	int n = atoi(param.c_str());
	if(n < 0 || n > 127)
		std::cout << "char: impossible" << std::endl;
	else if(n < 32 || n == 127)
		std::cout << "char: non-displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(n) << std::endl;
	std::cout << "int: " << n << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(n) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(n) << std::endl;
}


static void floatConvert(std::string param)
{
	float n = atof(param.c_str());
	if(n < 0 || n > 127)
		std::cout << "char: impossible" << std::endl;
	else if(n < 32 || n == 127)
		std::cout << "char: non-displayable" << std::endl;
	else
		std::cout << "char: " << static_cast <char>(n) << std::endl;
	std::cout << "int: " << static_cast<int>(n) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << n << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(n) << std::endl;
}

static void doubleConvert(std::string param)
{
	double n = atof(param.c_str());
	if (n < 0 || n > 127)
		std::cout << "char: impossible" << std::endl;
	else if (n < 32 || n == 127)
		std::cout << "char: non-displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(n) << std::endl;
	std::cout << "int: " << static_cast<int>(n) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(n) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << n << std::endl;
}

bool isPseudoLiteral(const std::string &param)
{
    if (param == "+inf" || param == "+inff")
	{
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
        return true;
    }
	else if (param == "-inf" || param == "-inff")
	{
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
        return true;
    }
	else if (param == "nan" || param == "nanf")
	{
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return true;
    }
    return false;
}

void Converter::convert(std::string param)
{
	if(isPseudoLiteral(param))
		return;
	if(param.length() == 1 && std::isdigit(param[0]) &&  !std::isdigit(param[0]))
		charConverter(param);
	else if(std::isdigit(param[0]) || (param[0] == '-' && std::isdigit(param[1])))
		intConvert(param);
	else if(std::isdigit(param[0]) || (param[0] == '-' && param.length() > 1))
		intConvert(param);
	else if(param[param.length() - 1] == 'f' && param.find('.') != std::string::npos)
		floatConvert(param);
	else if (param.find('.') != std::string::npos)
		doubleConvert(param);
	else
		std::cout << "Error: conversion impossible" << std::endl;
}