/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:01:52 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/29 15:09:29 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

 Span::Span(void) : _N(5)
{
    return ;
}

Span::Span(unsigned int N) : _N(N)
{
    return ;
}

Span::Span(const Span &span) : _N(span._N), _vec(span._vec)
{
	return ;
}
        
Span::~Span(void)
{
    return ;
}

Span &Span::operator=(const Span &span)
{
	this->_vec = span._vec;
	this->_N = span._N;
	return *this;
}

void Span::addNumber(int nbr)
{
	if (this->_vec.size() >= this->_N)
		throw std::runtime_error("Error: impossible to add more numbers");
	this->_vec.push_back(nbr);
}

void Span::addRangeOfNumbers(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end)
{
	if ((this->_vec.size() + std::distance(begin, end)) > this->_N)
		throw std::runtime_error("Error: impossible to add all this numbers");
	this->_vec.insert(this->_vec.end(), begin, end);
}


int Span::shortestSpan(void)
{
	int shortest = 2147483647;
	if (this->_vec.size() <= 1)
		throw std::runtime_error("Error: cannot run function with one or less Span");
	for (int i = 0; i < static_cast<int>(this->_vec.size()); i++)
		for (int j = 0; j < static_cast<int>(this->_vec.size()); j++)
		{
			if (j == i)
				j++;
			if (j == static_cast<int>(this->_vec.size()))
				break ;
			if (this->_vec[i] >= this->_vec[j] && this->_vec[i] - this->_vec[j] < shortest)
					shortest = this->_vec[i] - this->_vec[j];
			else if (this->_vec[j] >= this->_vec[i] && this->_vec[j] - this->_vec[i] < shortest)
					shortest = this->_vec[j] - this->_vec[i];
		}
	return shortest;
}

int Span::longestSpan(void)
{
	std::vector<int> buffer(this->_vec);
	sort(buffer.begin(), buffer.end());
	return (buffer[buffer.size() - 1] - buffer[0]);
}
