/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:29:13 by gussoare          #+#    #+#             */
/*   Updated: 2023/02/20 13:28:10 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie
{
    public:
        Zombie(std::string name);
        ~Zombie(void);
        void announce(void);
    private:
        std::string  _name;
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif