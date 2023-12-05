/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:43:03 by gussoare          #+#    #+#             */
/*   Updated: 2023/03/06 13:50:53 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor" << std::endl;
	return ;
}

Brain::Brain(Brain const &brain)
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = brain;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor" << std::endl;
	return ;
}

Brain &Brain::operator=(Brain const &rhs)
{
	std::cout << "Brain copy assigment operator" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return *this;
}
	