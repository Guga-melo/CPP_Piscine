/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:14:04 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/16 11:22:12 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
	return ;
}

Serializer::Serializer(const Serializer &serializer)
{
	*this = serializer;
	return ;
}

Serializer &Serializer::operator=(const Serializer &serializer)
{
	(void) serializer;
	return *this;
}

Serializer::~Serializer(void)
{
	return ;
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	uintptr_t new_ptr;
	new_ptr = reinterpret_cast<uintptr_t>(ptr);
	return new_ptr;
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	Data *new_ptr;
	new_ptr = reinterpret_cast<Data *>(raw);
	return new_ptr;
}

