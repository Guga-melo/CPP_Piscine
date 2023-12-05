/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:07:38 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/24 13:57:32 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	/*
	int x = 5;
	int y = 10;

	std::cout << "Before Swap:\nx: " << x << "\ny: " << y << std::endl;
	swap(x, y);
	std::cout << "After swap:\nx: " << x << "\ny: " << y << std::endl;
	std::cout << min(x, y) << " is the min" << std::endl;
	std::cout << max(x, y) << " is the max" << std::endl;


	char a = 'A';
	char b = 'B';

	std::cout << min(a, b) << " is the min" << std::endl;
	std::cout << max(a, b) << " is the max" << std::endl;
	*/
	return (0);
}