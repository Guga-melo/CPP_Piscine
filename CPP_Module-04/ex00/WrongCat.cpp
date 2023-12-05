/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:26:55 by gussoare          #+#    #+#             */
/*   Updated: 2023/03/06 13:27:36 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor" << std::endl;
	this->_type = "WrongCat";
	return ;
}

WrongCat::WrongCat(WrongCat const &wrongCat)
{
	std::cout << "WrongCat copy constructor" << std::endl;
	*this = wrongCat;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor" << std::endl;
	return ;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	std::cout << "WrongCat copy assigment operator" << std::endl;
	this->_type = rhs._type;
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "MEEEEEEOOOOOOWWW!" << std::endl;
	return ;
}
