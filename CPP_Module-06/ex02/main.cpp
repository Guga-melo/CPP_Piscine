/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:08:54 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/17 09:10:53 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	int randNum = std::rand() % 3;
	switch (randNum)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return 0;
}

void identify(Base *p) 
{
	if (dynamic_cast<const A *>(p) != nullptr) 
	{
		std::cout << "Pointer type is A" << std::endl;
		return;
	}
	else if (dynamic_cast<const B *>(p) != nullptr) 
	{
		std::cout << "Pointer type is B" << std::endl;
		return;
	}
	else if (dynamic_cast<const C *>(p) != nullptr) 
	{
		std::cout << "Pointer type is C" << std::endl;
		return;
	}
}

void identify(Base &p) 
{
	try
	{
		if (dynamic_cast<const A *>(&p) != nullptr) 
		{
			std::cout << "Pointer type is A" << std::endl;
			return;
		}
		else if (dynamic_cast<const B *>(&p) != nullptr) 
		{
			std::cout << "Pointer type is B" << std::endl;
			return;
		}
		if (dynamic_cast<const C *>(&p) != nullptr) 
		{
			std::cout << "Pointer type is C" << std::endl;
			return;
		}
	}
	catch (std::exception)
	{
		std::cerr << "Error" << std::endl;
	}
}

int main(void)
{
	std::srand(std::time(nullptr));
	Base *ptr;
	Base *ptr2;

	ptr = generate();
	ptr2 = generate();
	Base &ref = *ptr2;
	identify(ptr);
	identify(ref);
	return (0);
}