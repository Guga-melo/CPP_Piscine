/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:08:47 by gussoare          #+#    #+#             */
/*   Updated: 2023/06/27 11:18:21 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	std::cout << "----- First test -----" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top of MutantStack: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size of MutantStack: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "New size of MutantStack: "<< mstack.size() << std::endl;

	std::cout << "----- Second test -----" << std::endl;
	MutantStack<std::string> movieStack;
	for (int i = 0; i < 9; i++)
		movieStack.push("au");
	movieStack.push("meow");
	std::cout << "Size of MovieStack: " << movieStack.size() << std::endl;
	std::cout << "Top of MovieStack: " << movieStack.top() << std::endl;
	movieStack.pop();
	std::cout << "Size after pop top: " << movieStack.size() << std::endl;
	for (MutantStack<std::string>::iterator mit = movieStack.begin(); mit != movieStack.end(); mit++)
		std::cout << *mit << std::endl;
	return 0;
}