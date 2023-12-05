/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:51:21 by gussoare          #+#    #+#             */
/*   Updated: 2023/03/06 13:55:13 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return ;
}

Dog::Dog(Dog const &dog)
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = dog;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor" << std::endl;
	delete this->_brain;
	return ;
}

Dog &Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog copy assigment operator" << std::endl;
	this->_type = rhs._type;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "WOOF WOOF WOOF!!" << std::endl;
	return ;
}
