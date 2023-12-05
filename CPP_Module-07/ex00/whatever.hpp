/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:08:04 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/24 13:57:13 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &x, T &y)
{
	T aux = x;
	x = y;
	y = aux;
}

template <typename T>
T min(T const &x, T const &y)
{
	if (x < y)
		return x;
	else
		return y;
}

template <typename T>
T max(T const &x, T const &y)
{
	if (x > y)
		return x;
	else
		return y;
}

#endif
