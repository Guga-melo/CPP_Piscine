/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:47:24 by gussoare          #+#    #+#             */
/*   Updated: 2023/02/24 12:53:03 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type):_type(type)
{
    return ;
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
    return ;
}

std::string const &Weapon::getType(void)
{
    return this->_type;
}