/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:22:03 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/16 10:07:12 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>

class ScalarConverter
{
    public:
		virtual ~ScalarConverter(void);

		ScalarConverter &operator=(const ScalarConverter &scalarConverter);

        static void    convert(std::string &input);
        static void    charConverter(std::string &input);
        static void    numberConverter(std::string input);
        static bool    isPseudoLiteral(std::string &input);
    private:
        ScalarConverter(void);
		ScalarConverter(const ScalarConverter &scalarConverter);
};

#endif