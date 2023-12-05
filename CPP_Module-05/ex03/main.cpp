/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:05:50 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/09 09:36:03 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main(void)
{
	try
	{
		Intern someRandomIntern;
		Form *rrf;
		Bureaucrat gu("guga", 4);

		rrf = someRandomIntern.makeForm("Pardon reques", "home");
		std::cout << rrf->getGradeSign() << std::endl;
		gu.signForm(*rrf);
		gu.executeForm(*rrf);
		delete rrf;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}