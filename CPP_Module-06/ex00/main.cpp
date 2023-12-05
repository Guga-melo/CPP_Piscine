/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:44:36 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/10 15:31:58 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: Invalid number of arguments" << std::endl;
        return 0;
    }
    ScalarConverter scalar;
    std::string input = argv[1];

    scalar.convert(input);
    return 0;
}