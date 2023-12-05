/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:10:10 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/09 09:35:39 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern(void)
{
	return ;
}

Intern::Intern(const Intern &intern)
{
	*this = intern;
}

Intern::~Intern(void)
{
	return ;
}

Intern &Intern::operator=(const Intern &intern)
{
	(void) intern;
	return *this;
}

Form *Intern::makeShrubbery(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeRobotomy(const std::string &target)
{
	return new RobotomyRequestForm(target);
}

Form *Intern::makePardon(const std::string &target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string formName, std::string formTarget)
{
	std::string formNames[3] = {"Shrubbery request", "Robotomy request", "Pardon request"};
	Form *(Intern::*forms[3])(const std::string &target) = {&Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePardon};
	for (int i = 0; i < 3; i++)
	{
		if (formNames[i] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (this->*forms[i])(formTarget);
		}
	}
	throw(Intern::RequestDoesntExist());
	return NULL;
}

const char* Intern::RequestDoesntExist::what() const throw()
{
	return "Exception: Intern cant create this form, because it doesnt exist";
}