/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:10:13 by gussoare          #+#    #+#             */
/*   Updated: 2023/03/06 12:09:07 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string	name)
{
    std::cout << "FragTrap name constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap Default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const &fragtrap)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = fragtrap;
	return ;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap Destructor called" << std::endl;
	return ;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
    std::cout << "FragTrap Copy assigment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

void FragTrap::attack(std::string const &target)
{
	if (this->_hitPoints <= 0)
		std::cout << "FragTrap " << this->_name << " is too dead to attack." << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "FragTrap " << this->_name << " is tired of fighting" << std::endl;
	else
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	return ;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " is requesting a awesome high five!" << std::endl;
	return ;
}