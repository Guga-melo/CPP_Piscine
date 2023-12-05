/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:55:21 by gussoare          #+#    #+#             */
/*   Updated: 2023/06/06 14:13:05 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <cstdlib>
#include <stack>

class RPN
{
    public:
        RPN(void);
        RPN(const RPN &other);
        ~RPN(void);

        RPN &operator=(const RPN &rhs);

        void execute(std::string input);
        void checkInput(std::string input);
        int isOperator(char input);
        void execOperation(char op);
    private:
        std::stack<int> _stack;
};

#endif