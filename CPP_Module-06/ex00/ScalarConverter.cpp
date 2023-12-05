/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:23:57 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/16 09:00:54 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
    return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter &scalarConverter)
{
    *this = scalarConverter;
}

ScalarConverter::~ScalarConverter(void)
{
    return ;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &scalarConverter)
{
    (void) scalarConverter;
    return *this;
}

void ScalarConverter::convert(std::string &input)
{
    if (input.size() == 1 && std::isprint(input[0]) && !std::isdigit(input[0]))
        charConverter(input);
    else
        numberConverter(input);
}

void ScalarConverter::charConverter(std::string &input)
{
    std::string charValue = "";
    charValue = input[0];
    std::cout << "char: " << "'" << charValue <<  "'" << std::endl;
    std::cout << "int: " << static_cast<int>(charValue[0]) << std::endl;
    std::cout << "float: " << static_cast<float>(charValue[0]) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(charValue[0]) << ".0" << std::endl;
}

void    ScalarConverter::numberConverter(std::string input)
{
    std::string charValue = "";
    int intValue = 0;
    float floatValue = 0.0f;
    double doubleValue = 0.0;

    if (isPseudoLiteral(input))
        charValue = "Impossible";

    if (input[input.length() - 1] == 'f')
    {
        floatValue = std::atof(input.c_str());
        doubleValue = static_cast<double>(floatValue);
    }
    else
    {
        doubleValue = std::atof(input.c_str());
        floatValue = static_cast<float>(doubleValue);
    }

    intValue = std::atoi(input.c_str());
    if (charValue == "" && intValue < 127 && intValue > 31)
    {
        charValue = "'";
        charValue += static_cast<char>(intValue);
        charValue += "'";
    }
    else if (charValue != "Impossible")
        charValue = "Non displayable";
    std::cout << "char: " << charValue << std::endl;

    if (charValue == "Impossible")
        std::cout << "int: Impossible" << std::endl;
   else if (doubleValue >= -2147483648 && doubleValue <= 2147483647)
        std::cout << "int: " << intValue << std::endl;
    else
        std::cout << "int: Non displayable" << std::endl;

    if (charValue == "Impossible" && floatValue == 0)
        std::cout << "float: Impossible\ndouble: Impossible" << std::endl;
    else
    {
        if (charValue != "Impossible" && floatValue - static_cast<int>(floatValue) == 0)
        {
            std::cout << "float: " << floatValue << ".0f" << std::endl;
            std::cout << "double: " << doubleValue << ".0" << std::endl;
        }
        else
        {
            std::cout << "float: " << floatValue << "f" << std::endl;
            std::cout << "double: " << doubleValue << std::endl;
        }
    }
}

bool    ScalarConverter::isPseudoLiteral(std::string &input)
{
    std::string specialCases[6] = {"nan", "nanf", "+inf", "-inf", "+inff", "-inff"};

    for (int i = 0; i < 6; i++)
    {
        if (input == specialCases[i])
            return true;
    }
    return false;
}