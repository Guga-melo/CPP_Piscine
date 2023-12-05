/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:10:56 by gussoare          #+#    #+#             */
/*   Updated: 2023/05/09 09:30:31 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern
{
	public:
		Intern(void);
		Intern(const Intern &intern);
		~Intern(void);

		Intern &operator=(const Intern &intern);

		Form *makeForm(std::string formName, std::string formTarget);
		Form *makeShrubbery(const std::string &target);
		Form *makeRobotomy(const std::string &target);
		Form *makePardon(const std::string &target);

		class RequestDoesntExist : public std::exception
		{
			virtual const char *what() const throw();
		};
};

#endif
