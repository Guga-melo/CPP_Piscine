/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:23:23 by gussoare          #+#    #+#             */
/*   Updated: 2023/03/06 13:24:37 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &wrongAnimal)
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
	*this = wrongAnimal;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor" << std::endl;
	return ;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << "WrongAnimal copy assigment operator" << std::endl;
	this->_type = rhs._type;
	return *this;
}

std::string WrongAnimal::getType(void) const
{
	return this->_type;
}


void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal does ???????" << std::endl;
	return ;
}
