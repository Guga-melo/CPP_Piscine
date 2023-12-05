/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 07:53:32 by gussoare          #+#    #+#             */
/*   Updated: 2023/03/06 12:12:59 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap moxxie("moxxie");
	ScavTrap jack("handsome jack");
	FragTrap tina("Tiny Tina");

	moxxie.attack("Psycho");
	jack.attack("Maya");
	tina.attack("Dragon");

	moxxie.takeDamage(5);
	jack.takeDamage(20);
	tina.takeDamage(30);

	moxxie.beRepaired(5);
	jack.beRepaired(20);
	tina.beRepaired(30);

	jack.guardGate();
	tina.highFivesGuys();
	
	return 0;

}