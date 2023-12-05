/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:05:50 by gussoare          #+#    #+#             */
/*   Updated: 2023/04/27 14:03:00 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(void)
{
	try
	{
		ShrubberyCreationForm	home("home");
		RobotomyRequestForm		robot("robot");
		PresidentialPardonForm	president("mr president");
		Bureaucrat				gu("guga", 5);

		gu.signForm(home);
		gu.executeForm(home);
		gu.signForm(robot);
		gu.executeForm(robot);
		gu.signForm(president);
		gu.executeForm(president);
		/*
		std::cout << test << std::endl;
		std::cout << bu << std::endl;
		bu.signForm(test);
		std::cout << test << std::endl;
		bu.decrementGrade();
		std::cout << bu << std::endl;
		bu.incrementGrade();
		std::cout << bu << std::endl;
		bu.decrementGrade();
		std::cout << bu << std::endl;
		bu.decrementGrade();
		*/
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}