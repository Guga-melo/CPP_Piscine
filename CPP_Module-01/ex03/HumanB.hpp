/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:09:24 by gussoare          #+#    #+#             */
/*   Updated: 2023/02/24 13:08:08 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name);
        void    attack(void);
        void    setWeapon(Weapon &Weapon);
    private:
        std::string _name;
        Weapon *_weapon;
};

#endif