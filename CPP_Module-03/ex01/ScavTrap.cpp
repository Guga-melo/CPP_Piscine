/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:32:49 by gussoare          #+#    #+#             */
/*   Updated: 2023/03/06 10:52:21 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string	name)
{
    std::cout << "ScavTrap name constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &scavtrap)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = scavtrap;
	return ;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap Destructor called" << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
    std::cout << "ScavTrap Copy assigment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

void ScavTrap::attack(std::string const &target)
{
	if (this->_hitPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " is too dead to attack." << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " is tired of fighting" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	return ;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " activated gate keeper mode..." << std::endl;
	return ;
}
