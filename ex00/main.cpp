/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <thlefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:10:03 by thlefebv          #+#    #+#             */
/*   Updated: 2024/10/28 13:45:51 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		std::cout << "Error- form: ./converter [string]" << std::endl;
		return(0);
	}
	Converter::convert(argv[1]);
	return(0);
}