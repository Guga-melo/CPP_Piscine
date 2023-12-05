/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:55:45 by gussoare          #+#    #+#             */
/*   Updated: 2023/02/24 13:09:10 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):_name(name)
{
    return ;
}

void HumanB::attack()
{
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    return ;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
    return ;
}