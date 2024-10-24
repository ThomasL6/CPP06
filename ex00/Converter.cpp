/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <thlefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:46:05 by thlefebv          #+#    #+#             */
/*   Updated: 2024/10/24 15:40:17 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int ft_atoi(std::string str)
{
	int sign = 1;
	int nb = 0;
	size_t i = 0;
	while(i < str.length() && (str[i] == ' ' || str[i] >= 9 && str[i] <= 13))
		i++;
	if(i < str.length() && (str[i] == '-' || str[i] == '+'))
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while(i < str.length() && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - 0);
		i++;
	}
	return(nb * sign);
}

static void charConverter(std::string param)
{
	std::cout << "char: " << param[0] << std::endl;
	std::cout << "int: " << static_cast <int>(param[0]) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << param[0] << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << param[0] << std::endl;
}

static void intConvert(std::string param)
{
	int n = ft_atoi(param.c_str());
	if(n < 0 || n > 127)
		std::cout << "char: impossible" << std::endl;
	else if(n < 32 || n == 127)
		std::cout << "char: non-displayable" << std::endl;
	else
		std::cout << "char: " << static_cast <char>(n) << std::endl;
	std::cout << "int: " << n << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << param[0] << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << param[0] << std::endl;
}

static void floatConvert(std::string param)
{
	
}

void Converter::convert(std::string param)
{

}