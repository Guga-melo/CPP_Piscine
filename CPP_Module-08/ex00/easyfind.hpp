/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:12:22 by gussoare          #+#    #+#             */
/*   Updated: 2023/06/27 11:40:03 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <list>
#include <map>
#include <vector>

template<typename T>
typename T::iterator easyfind(T& container, int value) 
{
    typename T::iterator it;

    for (it = container.begin(); it != container.end(); it++)
    {
        if (*it == value)
            return it;
    }
    throw std::runtime_error("Error: cannot find occurrence");
}

#endif