/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:58:12 by gussoare          #+#    #+#             */
/*   Updated: 2023/02/20 13:40:54 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::cout << "creating a zombie without function" << std::endl;
    Zombie zombie1("Witch");
    zombie1.announce();
    std::cout << "creating a zombie using NewZombie function" << std::endl;
    Zombie *zombie2;
    zombie2 = newZombie("Smoker");
    zombie2->announce();
    std::cout << "creating a zombie using RandomChump function" << std::endl;
    randomChump("Hunter");
    delete zombie2;
    return (0);
}