/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:22:45 by gussoare          #+#    #+#             */
/*   Updated: 2023/03/06 11:16:31 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(void);
		ScavTrap(ScavTrap const &scavtrap);
		~ScavTrap(void);

		ScavTrap &operator=(ScavTrap const &rhs);

		void attack(std::string const &target);
		void guardGate(void);
};

#endif 