/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:25:19 by gussoare          #+#    #+#             */
/*   Updated: 2023/03/06 13:27:59 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
		public:
			WrongCat(void);
			WrongCat(WrongCat const &wrongCat);
			~WrongCat(void);

			WrongCat &operator=(WrongCat const &wrongCat);

			void makeSound(void) const;
};

#endif