/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:53:42 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/29 14:49:32 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>

class Span
{
    public:
        Span(void);
        Span(unsigned int N);
        Span(const Span &span);
        ~Span(void);

        Span &operator=(const Span &span);

        void addNumber(int nbr);
        void addRangeOfNumbers(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end);
        int shortestSpan(void);
        int longestSpan(void);
    private:
        unsigned int _N;
        std::vector<int> _vec;
};

#endif