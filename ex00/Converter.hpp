/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <thlefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:45:59 by thlefebv          #+#    #+#             */
/*   Updated: 2024/10/28 11:30:13 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <climits>
#include <string>
#include <cstdlib>

class Converter
{
	public:
		static void convert(std::string param);
	private:
		Converter();
		Converter(const Converter &other);
		Converter& operator=(const Converter &rhs);
		~Converter();
};

