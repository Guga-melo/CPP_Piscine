/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:14:07 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/16 12:02:47 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

struct Data
{
	std::string name;
	int age;
};

class Serializer
{
	public:
		~Serializer(void);

		Serializer	&operator=(const Serializer &serializer);

		static uintptr_t	serialize(Data *ptr);
		static Data		*deserialize(uintptr_t raw);
	private:
		Serializer(void);
		Serializer(const Serializer &serializer);		
};

#endif