/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:50:00 by gussoare          #+#    #+#             */
/*   Updated: 2023/06/29 12:50:36 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
    return ;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    this->_map = other._map;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
    if (this == &rhs) 
        return *this;
    this->_map = rhs._map;
    return *this;
}

BitcoinExchange::~BitcoinExchange(void)
{
    return ;
}


template<class InputIterator, class T>
int count(InputIterator first, InputIterator last, const T& value) {
    int count = 0;
    for (; first != last; ++first) {
        if (*first == value) {
            ++count;
        }
    }
    return count;
}


void BitcoinExchange::getDataToMap(void)
{
	std::ifstream file("data.csv");
    if (!file.is_open())
        throw std::runtime_error("Failed to open File");
    std::string line;
    while (std::getline(file, line))
    {
        std::string date = line.substr(0, 10);
        std::string exRate = line.substr(11);
        float value = atof(exRate.c_str());
        this->_map.insert(std::make_pair(date, value));
    }
}

bool BitcoinExchange::errorMessage(std::string message, std::string reference)
{
	std::cerr << "Error: " << message << " => " << reference << std::endl;
	return false;
}


bool BitcoinExchange::checkForPipe(const std::string &line)
{
	int pipeNbr = count(line.begin(), line.end(), '|');

	if (pipeNbr == 1)
		return true;
	return errorMessage("bad input", line);
}

bool BitcoinExchange::isLeapYear(const int &year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}


bool BitcoinExchange::checkDate(const std::string &date)
{
	int delimiterCount = count(date.begin(), date.end(), '-');

	if (date.size() != 11 || date[4] != '-' || date[7] != '-'\
		|| date[date.size() - 1] != ' ')
		return errorMessage("Bad date 1", date);
	if (delimiterCount != 2)
		return errorMessage("Bad date 2", date);
	for (std::string::const_iterator it = date.begin(); it != date.end() - 1; it++)
	{
		if (!std::isdigit(*it) && *it != '-')
			return errorMessage("Bad date 3", date);
	}

	int year = std::atof(date.substr(0, 4).c_str());
	int month = std::atof(date.substr(5, 2).c_str());
	int day = std::atof(date.substr(8, 2).c_str());

	if (year < 0 || month < 1 || month > 12 || day < 1)
		return errorMessage("Bad date 4", date);
	int maxDays;
	if (month == 2)
		maxDays = isLeapYear(year) ? 29 : 28;
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		maxDays = 30;
	else
		maxDays = 31;

	if (day > maxDays)
		return errorMessage("Bad date 5", date);
	return true;
}

bool BitcoinExchange::checkValue(const std::string &value)
{
	int pointCount = count(value.begin(), value.end(), '.');

	if (pointCount > 1 || value.size() < 2 || value[0] != ' ')
		return errorMessage("Bad Value 1", value.substr(1));
	if (value[1] == '-')
		return errorMessage("Not a positive Number", value.substr(1));

	for (std::string::const_iterator it = value.begin() + 1; it != value.end() - 1; it++)
	{
		if (!std::isdigit(*it) && *it != '.')
			return errorMessage("Bad value 2", value.substr(1));
	}

	float valueNbr = std::atof(value.c_str());

	if (valueNbr > 999)
		return errorMessage("number is too big", value.substr(1));
	if (valueNbr <= 0)
		return errorMessage("Not a positive Number", value.substr(1));
	return true;
}



void BitcoinExchange::makeExchange(const std::string &line)
{
	if (!checkForPipe(line))
		return ;

	int pipeIndex = line.find('|');

	std::string date = line.substr(0, pipeIndex);
	if (!checkDate(date))
		return ;

	std::string value = line.substr(pipeIndex + 1);
	if (!checkValue(value))
		return ;

	std::string trueDate = date.substr(0, 10);
  	float rate = std::atof(value.c_str());

  	float exchangeRate = rate * (--this->_map.upper_bound(trueDate))->second;

  std::cout << trueDate << " => " << rate << " = " << exchangeRate << std::endl;

}

void BitcoinExchange::execute(const std::string &input)
{
	getDataToMap();
    std::ifstream	infile(input.c_str());
	std::string		line;
	int				jump = 0;
	while (getline(infile, line))
	{
		if (jump != 0)
			makeExchange(line);
		jump++;
	}
}
