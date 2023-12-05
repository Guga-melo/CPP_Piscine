/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:33:56 by gussoare          #+#    #+#             */
/*   Updated: 2023/02/24 13:04:01 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("bob", club);
    bob.attack();
    club.setType("Long sword");
    bob.attack();
    Weapon club2 = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club2);
    jim.attack();
    club2.setType("some other type of club");
    jim.attack();
    return (0);
}