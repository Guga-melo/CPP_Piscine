/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:03:12 by gussoare          #+#    #+#             */
/*   Updated: 2023/03/06 14:11:32 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	//const Animal *animal = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	//std::cout << "???" << std::endl;
	//animal->makeSound();
	std::cout << dog->getType() << std::endl;
	dog->makeSound();
	std::cout << cat->getType() << std::endl;
	cat->makeSound();

	//delete animal;
	delete dog;
	delete cat;

	return 0;
}
