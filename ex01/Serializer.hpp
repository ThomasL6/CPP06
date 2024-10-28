/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomas <thomas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:37:14 by thomas            #+#    #+#             */
/*   Updated: 2024/10/28 20:14:06 by thomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdint.h>

typedef struct Data
{
	std::string	firstName;
	std::string lastName;
	std::string nickname;
	int			age;
	double		level;
}				Data;
class Serializer
{
	private:
		Serializer();
		Serializer& operator=(Serializer const &rhs);
		Serializer(Serializer const &other);
		~Serializer();

	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};


