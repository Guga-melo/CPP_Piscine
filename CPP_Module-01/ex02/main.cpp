/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:00:33 by gussoare          #+#    #+#             */
/*   Updated: 2023/02/23 13:09:48 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *strp = &str;
    std::string &strr = str;
    
    std::cout << "The memory address of the string variable--> ";
    std::cout << &str << std::endl;
    std::cout << "The memory address held by stringPTR--> ";
    std::cout << strp << std::endl;
    std::cout << "The memory address held by stringREF--> ";
    std::cout << &strr << std::endl;
    std::cout << "----------------------------------------------------------------------------" << std::endl;
    std::cout << "The value of the string variable--> ";
    std::cout << str << std::endl;
    std::cout << "The value pointed to by stringPTR--> ";
    std::cout << *strp << std::endl;
    std::cout << "The value pointed to by stringREF--> ";
    std::cout << strr << std::endl;
    return (0);
}