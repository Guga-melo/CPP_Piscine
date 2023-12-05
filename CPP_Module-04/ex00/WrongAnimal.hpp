/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:23:06 by gussoare          #+#    #+#             */
/*   Updated: 2023/03/06 13:34:01 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &wrongAnimal);
		virtual ~WrongAnimal(void);

		WrongAnimal &operator=(WrongAnimal const &rhs);

		std::string getType(void) const;
		void makeSound(void) const;
	protected:
		std::string _type;
};

#endif
