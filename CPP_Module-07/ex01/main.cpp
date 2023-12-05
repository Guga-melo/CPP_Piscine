/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:07:38 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/17 10:58:29 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printArray(int nbr)
{
	std::cout << nbr << std::endl;
}

int main(void)
{
	int array[5] = {1, 2, 3, 4, 5};
	int len = 5;
	iter(array, len, printArray);
	
}