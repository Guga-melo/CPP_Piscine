/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:13:45 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/16 12:06:05 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data data;

	data.name = "Guga";
	data.age = 22;
	std::cout << "Hello! My name is " << data.name << " and I'm " << data.age << " years old. Nice to meet you! ^_^" << std::endl;

	uintptr_t ptr = Serializer::serialize(&data);
	Data *dataPtr = Serializer::deserialize(ptr);
	std::cout << "Hello! My name is " << dataPtr->name << " and I'm " << dataPtr->age << " years old. Nice to meet you! ^_^" << std::endl;
	return (0);
}