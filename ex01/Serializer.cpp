/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomas <thomas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:37:12 by thomas            #+#    #+#             */
/*   Updated: 2024/10/28 20:00:00 by thomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr)
{
	return(reinterpret_cast <uintptr_t>(ptr));	
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data*>(raw));
}