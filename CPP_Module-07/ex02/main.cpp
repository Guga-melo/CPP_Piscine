/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:07:38 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/24 14:11:28 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	try
	{
		Array <int>a(10);
		Array <int>i = a;

		std::cout << "size a: " << a.size() << std::endl;
		std::cout << "size i: " << i.size() << std::endl;

		for (int idx = 0; idx < i.size(); idx++)
			i[idx] = idx;

		std::cout << "Printing array of int:" << std::endl;		
		for (int idx = 0; idx < i.size(); idx++)
			std::cout << "i[" << idx << "]: " << i[idx] << std::endl;

		Array <char>c(26);

		for (int idx = 0; idx < c.size(); idx++)
			c[idx] = idx + 65;
		std::cout << "\nPrinting array of char:" << std::endl;		
		for (int idx = 0; idx < c.size(); idx++)
			std::cout << "c[" << idx << "]: " << c[idx] << std::endl;
		return (0);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error" << std::endl;
	}
}