/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:08:47 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/25 14:02:56 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	try
	{
		std::list<int>	lst;
		for (int i = 0; i < 10; i++)
			lst.push_back(i);
		for (std::list<int>::iterator it = easyfind(lst, 5); it != lst.end(); it++)
			std::cout << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
    return (0);
}