/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:24:45 by gussoare          #+#    #+#             */
/*   Updated: 2023/02/24 12:52:27 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>

class Weapon
{
    public:
        Weapon(std::string type);
        std::string const &getType(void);
        void        setType(std::string type);
    private:
        std::string _type;
};

#endif