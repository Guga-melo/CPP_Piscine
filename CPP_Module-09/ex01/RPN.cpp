/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:21:38 by gussoare          #+#    #+#             */
/*   Updated: 2023/06/29 13:00:21 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
    return ;
}

RPN::RPN(const RPN &other)
{
    this->_stack = other._stack;
}

RPN::~RPN()
{
    return ;
}

RPN &RPN::operator=(const RPN &rhs)
{
     if (this == &rhs) 
        return *this;
    this->_stack = rhs._stack;
    return *this;
}

int RPN::isOperator(char input)
{
    if (input == '-')
        return ('-');
    else  if (input == '+')
        return ('+');
    else  if (input == '*')
        return ('*');
    else  if (input == '/')
        return ('/');
    else
        return 0;
}

void RPN::execOperation(char op)
{
	int nbrB = this->_stack.top();
	this->_stack.pop();
	int nbrA = this->_stack.top();
	this->_stack.pop();
	 if (op == '-')
	 	this->_stack.push(nbrA - nbrB);
    else  if (op == '+')
	 	this->_stack.push(nbrA + nbrB);
    else  if (op == '*')
	 	this->_stack.push(nbrA * nbrB);
    else if (nbrB == 0)
        throw std::runtime_error("Error: Cannot divide by zero");
	else
        this->_stack.push(nbrA / nbrB);
}


void RPN::checkInput(std::string input)
{
    for (int i = 0; input[i] != 0; i++)
    {
        while (input[i] == ' ')
            i++;
        if (!input[i])
            return ;
        if (i >= 1 && isdigit(input[i]) && isdigit(input[i - 1]))
                throw std::runtime_error("Error: Cannot use numbers bigger than 9");
        if (isdigit(input[i]))
        {
            std::string nbrStr = input.substr(i, i + 1);
            int nbr = std::atoi(nbrStr.c_str());
            this->_stack.push(nbr);
        }
        else 
        {
            if (isOperator(input[i]) && this->_stack.size() >= 2)
                execOperation(isOperator(input[i]));
            else
                throw std::runtime_error("Error: invalid argument");
        }
    }
}

void RPN::execute(std::string input)
{
    if (input.empty())
        throw std::runtime_error("Error: invalid argument");

    checkInput(input);
    while (!this->_stack.empty()) {
        std::cout << this->_stack.top() << " ";
        this->_stack.pop();
    }
    std::cout << std::endl;
}
