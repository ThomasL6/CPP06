/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomas <thomas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:19:31 by thomas            #+#    #+#             */
/*   Updated: 2024/10/28 20:15:58 by thomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
int main()
{
	Data input;

	input.firstName = "Thomas";
	input.lastName = "Lefebvre";
	input.nickname = "thlefebv";
	input.age = 25;
	input.level = 5.23;

	std::cout << "first name: " << input.firstName << std::endl;
	std::cout << "last name: " << input.lastName << std::endl;
	std::cout << "nickname: " << input.nickname << std::endl;
	std::cout << "age: " << input.age << std::endl;
	std::cout << "level: " << input.level << std::endl;

	std::cout << "------------------------" << std::endl;

	uintptr_t output_uintptr = Serializer::serialize(&input);

	Data* output = Serializer::deserialize(output_uintptr);

	std::cout << "first name: " << output->firstName << std::endl;
	std::cout << "last name: " << output->lastName << std::endl;
	std::cout << "nickname: " << output->nickname << std::endl;
	std::cout << "age: " << output->age << std::endl;
	std::cout << "level: " << output->level << std::endl;
}