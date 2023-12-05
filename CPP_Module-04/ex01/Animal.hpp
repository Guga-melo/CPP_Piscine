/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:36:02 by gussoare          #+#    #+#             */
/*   Updated: 2023/03/06 13:19:02 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(Animal const &animal);
		virtual ~Animal(void);

		Animal &operator=(Animal const &rhs);

		std::string getType(void) const;
		virtual void makeSound(void) const;
	protected:
		std::string _type;
};

#endif
