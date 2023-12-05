/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:07:35 by gussoare          #+#    #+#             */
/*   Updated: 2023/02/20 15:47:46 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
#include <cstdlib>

class Zombie
{
    public:
        ~Zombie(void);
        void setName(std::string name);
        void announce(void);
    private:
        std::string  _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif