/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 07:53:32 by gussoare          #+#    #+#             */
/*   Updated: 2023/03/06 11:06:14 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap jack("handsome jack");

	jack.takeDamage(50);
	jack.beRepaired(50);
	for (int i = 0; i < 46; i++)
		jack.attack("Maya");
	jack.takeDamage(100);
	jack.takeDamage(1);
	jack.attack("Zer0");
	jack.guardGate();
	
	return 0;

}