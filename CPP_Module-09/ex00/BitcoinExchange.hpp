/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:48:19 by gussoare          #+#    #+#             */
/*   Updated: 2023/06/01 12:52:57 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <map>

class BitcoinExchange
{
    public:
        BitcoinExchange(void);
        BitcoinExchange(const BitcoinExchange &bte);
        BitcoinExchange &operator=(const BitcoinExchange &bte);
        ~BitcoinExchange(void);
        
        void execute(const std::string &input);
        void getDataToMap(void);
        void makeExchange(const std::string &line);
        bool errorMessage(std::string message, std::string reference);
        bool checkForPipe(const std::string &line);
        bool checkDate(const std::string &date);
        bool isLeapYear(const int &year);
        bool checkValue(const std::string &value);
    private:
        std::map<std::string, float> _map;
};

#endif