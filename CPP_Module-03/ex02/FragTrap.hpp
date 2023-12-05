/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:10:22 by gussoare          #+#    #+#             */
/*   Updated: 2023/03/06 12:03:51 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(void);
		FragTrap(FragTrap const &fragtrap);
		~FragTrap(void);

		FragTrap &operator=(FragTrap const &rhs);
		
		void attack(std::string const &target);
		void highFivesGuys(void);
};

#endif