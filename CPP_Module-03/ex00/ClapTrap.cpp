/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 07:53:26 by gussoare          #+#    #+#             */
/*   Updated: 2023/03/06 09:49:56 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string	name):_name(name)
{
    std::cout << "name constructor called" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	return ;
}

ClapTrap::ClapTrap(void)
{
    std::cout << "Default constructor called" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &claptrap)
{
    std::cout << "Copy constructor called" << std::endl;
	*this = claptrap;
	return ;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;
	return ;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
    std::cout << "Copy assigment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

void ClapTrap::attack(std::string const &target)
{
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is too dead to attack." << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is tired of fighting" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
		std::cout << "STOP IT!! ClapTrap " << this->_name << " IS ALREADY DEAD!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " lost " << amount << " points of health!" << std::endl;
		this->_hitPoints -= amount;
	}
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " cant repair death." << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " forgot how to repair itself." << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " repaired itself, gaining " << amount << " points of health!" << std::endl;
		this->_energyPoints--;
		this->_hitPoints += amount;
	}
	return ;
}

