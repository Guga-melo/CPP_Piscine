/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:31:07 by gussoare          #+#    #+#             */
/*   Updated: 2023/02/27 08:38:59 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main (int argc, char **argv)
{
    if (argc == 4)
    {
        std::string infile(argv[1]);
        std::string s1(argv[2]);
        std::string s2(argv[3]);
        std::ifstream ifs(infile.c_str());
        std::string outfile = infile + ".replace";
        if (!s1.length())
        {
            std::cout << "Error: empty argument" << std::endl;
            return (0);
        }
        if (!ifs.fail())
        {
            std::string line;
            std::ofstream ofs(outfile.c_str());
            int begin;
            while (std::getline(ifs, line))
            {
                int pos = line.find(s1);
                while (pos != -1)
                {
                    line.erase(pos, s1.length()).insert(pos, s2);
                    begin = pos + s2.length();
                    pos = line.find(s1, begin);
                }
                ofs << line << std::endl;
            }
        }
        else
            std::cout << "Error: file doesnt exist or cannot be open" << std::endl;
    }
    else
        std::cout << "Número de argumentos inválido" << std::endl;
    return (0);
}