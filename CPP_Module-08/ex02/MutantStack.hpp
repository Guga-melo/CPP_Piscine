/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:28:12 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/30 08:42:30 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <iterator>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
	public:
		MutantStack(void) {};
		MutantStack(const MutantStack &mstack) : std::stack<T>(mstack) {};
		~MutantStack(void) {
			this->c.clear();
		}

		MutantStack &operator=(const MutantStack &rhs)
		{
			if (this == &rhs)
				return *this;
			this->c = rhs.c;
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin(void)
		{
			return this->c.begin();
		}

		iterator end(void)
		{
			return this->c.end();
		}
};

#endif