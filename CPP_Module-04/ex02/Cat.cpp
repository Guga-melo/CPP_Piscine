/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:54:00 by gussoare          #+#    #+#             */
/*   Updated: 2023/03/06 13:55:21 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	return ;
}

Cat::Cat(Cat const &cat)
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = cat;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor" << std::endl;
	delete this->_brain;
	return ;
}

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat copy assigment operator" << std::endl;
	this->_type = rhs._type;
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "MEEEEEEOOOOOOWWW!" << std::endl;
	return ;
}
