/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:49:35 by gussoare          #+#    #+#             */
/*   Updated: 2023/03/06 13:20:01 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
		public:
			Cat(void);
			Cat(Cat const &cat);
			~Cat(void);

			Cat &operator=(Cat const &cat);

			void makeSound(void) const;
};

#endif