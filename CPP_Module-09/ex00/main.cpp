/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:08:47 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/31 16:04:39 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	try
	{
		BitcoinExchange bte;
		if (argc != 2)
			throw std::runtime_error("Invalid number of arguments");
		std::string input = argv[1];
		bte.execute(input);
		return (0);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
    return (0);
}