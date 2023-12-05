/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:40:50 by gussoare          #+#    #+#             */
/*   Updated: 2023/03/06 13:19:13 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor" << std::endl;
	return ;
}

Animal::Animal(Animal const &animal)
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = animal;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor" << std::endl;
	return ;
}

Animal &Animal::operator=(Animal const &rhs)
{
	std::cout << "Animal copy assigment operator" << std::endl;
	this->_type = rhs._type;
	return *this;
}

std::string Animal::getType(void) const
{
	return this->_type;
}


void Animal::makeSound(void) const
{
	std::cout << "Animal does ???????" << std::endl;
	return ;
}

