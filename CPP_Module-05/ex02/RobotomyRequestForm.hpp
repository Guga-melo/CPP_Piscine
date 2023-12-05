/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 09:28:40 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/09 11:17:22 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form
{
    public:
		RobotomyRequestForm(std::string name);
		RobotomyRequestForm(const RobotomyRequestForm &robotomy);
		~RobotomyRequestForm(void);

		RobotomyRequestForm &operator=(const RobotomyRequestForm &robotomy);

		void	execute(Bureaucrat const &executor) const;


	private:
		std::string	_name;
};

std::ostream    &operator<<(std::ostream &o, const RobotomyRequestForm &robotomy);

#endif