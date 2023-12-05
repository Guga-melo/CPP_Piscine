/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 07:53:32 by gussoare          #+#    #+#             */
/*   Updated: 2023/03/06 09:57:27 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap moxxi("Moxxi");

	moxxi.attack("Psycho");
	moxxi.takeDamage(5);
	moxxi.beRepaired(5);
	moxxi.attack("Psycho");
	moxxi.attack("Psycho");
	moxxi.attack("Psycho");
	moxxi.attack("Psycho");
	moxxi.takeDamage(10);
	moxxi.beRepaired(10);
	moxxi.takeDamage(10);
	moxxi.attack("Psycho");
	moxxi.attack("Psycho");
	moxxi.attack("Psycho");
	moxxi.attack("Psycho");
	moxxi.attack("Psycho");
	return 0;

}