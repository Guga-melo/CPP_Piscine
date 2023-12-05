/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:08:47 by gussoare          #+#    #+#             */
/*   Updated: 2023/06/06 13:23:47 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	try
	{
		if (argc != 2)
			throw std::runtime_error("Error: Invalid argument");
		RPN rpn;
		std::string input = argv[1];
		rpn.execute(input);


		return (0);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
    return (0);
}