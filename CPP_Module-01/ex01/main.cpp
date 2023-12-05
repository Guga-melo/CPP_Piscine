/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:09:04 by gussoare          #+#    #+#             */
/*   Updated: 2023/02/20 15:37:21 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *horde;
    horde = zombieHorde(5, "Charger");
    for (int i = 0; i < 5; i++)
        horde[i].announce();
    delete [] horde;
    return (0);
}